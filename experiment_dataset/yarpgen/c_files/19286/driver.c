#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
unsigned long long int var_1 = 10870888553525984637ULL;
unsigned int var_3 = 2675573679U;
long long int var_8 = -8185678142680892239LL;
signed char var_9 = (signed char)36;
signed char var_10 = (signed char)-33;
int zero = 0;
unsigned char var_13 = (unsigned char)79;
_Bool var_14 = (_Bool)1;
int var_15 = 989989551;
long long int var_16 = 9000278964323378868LL;
unsigned char var_17 = (unsigned char)139;
unsigned long long int arr_5 [19] ;
unsigned char arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 4142763554231050559ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)103;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
