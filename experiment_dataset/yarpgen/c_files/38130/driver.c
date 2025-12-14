#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16192;
long long int var_2 = -6201854359792550476LL;
signed char var_4 = (signed char)18;
unsigned long long int var_8 = 14226553405015378926ULL;
unsigned char var_9 = (unsigned char)80;
long long int var_10 = -1630015867530879683LL;
unsigned int var_12 = 1879746352U;
signed char var_13 = (signed char)9;
int var_14 = 58743633;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 7706432604670015238LL;
short var_19 = (short)11750;
long long int var_20 = 3897126238842337139LL;
unsigned long long int var_21 = 12352079846467379617ULL;
long long int var_22 = -1394626008901533822LL;
int arr_14 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 1047850278;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
