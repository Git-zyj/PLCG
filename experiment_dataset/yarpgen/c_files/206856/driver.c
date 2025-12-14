#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1425309412;
short var_1 = (short)8992;
short var_3 = (short)20974;
unsigned int var_5 = 1525402544U;
short var_7 = (short)20524;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-49;
long long int var_11 = -8013781318774651218LL;
int zero = 0;
signed char var_12 = (signed char)119;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)3;
unsigned long long int var_15 = 13040343701882190609ULL;
unsigned char var_16 = (unsigned char)8;
int var_17 = 33038255;
unsigned int var_18 = 2851771955U;
long long int arr_2 [10] ;
unsigned char arr_4 [10] ;
unsigned long long int arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4369234364595545008LL : -1597502668704867781LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)62 : (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 16702411637228922097ULL : 4918541356408174527ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
