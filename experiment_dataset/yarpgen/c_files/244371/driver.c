#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)33;
long long int var_3 = 7494735394121117624LL;
unsigned short var_4 = (unsigned short)12394;
unsigned long long int var_6 = 15277845619207350035ULL;
unsigned int var_8 = 3113423503U;
short var_9 = (short)11666;
unsigned char var_10 = (unsigned char)138;
unsigned long long int var_12 = 9143836910923314140ULL;
short var_13 = (short)21050;
short var_14 = (short)-9975;
short var_15 = (short)7898;
int zero = 0;
unsigned int var_16 = 2657304266U;
signed char var_17 = (signed char)70;
short var_18 = (short)30828;
long long int var_19 = -1418765883282623551LL;
short var_20 = (short)-10633;
unsigned int var_21 = 594124391U;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)43;
unsigned char var_24 = (unsigned char)82;
short arr_0 [20] [20] ;
signed char arr_1 [20] ;
unsigned long long int arr_3 [19] ;
long long int arr_8 [19] [19] ;
short arr_9 [19] ;
unsigned int arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-5033;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 13125174824603874024ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? -4277670192379439687LL : -6247360604403992885LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-22191 : (short)3405;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 103311223U : 70841142U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
