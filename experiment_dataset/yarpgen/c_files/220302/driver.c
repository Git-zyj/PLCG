#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)131;
unsigned short var_8 = (unsigned short)19551;
unsigned int var_9 = 1457567174U;
unsigned short var_10 = (unsigned short)34853;
_Bool var_12 = (_Bool)0;
unsigned char var_16 = (unsigned char)229;
int zero = 0;
unsigned long long int var_18 = 13190602020694054653ULL;
long long int var_19 = 8382415561176412388LL;
unsigned short var_20 = (unsigned short)24301;
short var_21 = (short)14821;
short var_22 = (short)7141;
long long int var_23 = -1462226021486956215LL;
_Bool arr_1 [19] [19] ;
unsigned long long int arr_7 [19] [19] [19] [19] ;
unsigned int arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 5186916308326982720ULL : 8979360905721493037ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1686425411U : 3404224410U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
