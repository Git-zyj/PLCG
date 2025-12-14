#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)136;
int var_2 = -176455984;
unsigned char var_3 = (unsigned char)216;
signed char var_4 = (signed char)112;
signed char var_5 = (signed char)77;
signed char var_7 = (signed char)115;
short var_8 = (short)23659;
unsigned long long int var_9 = 5150287107937365801ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 7977552928095429036ULL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)7651;
unsigned int var_17 = 248058544U;
unsigned short var_18 = (unsigned short)44123;
int zero = 0;
unsigned int var_19 = 2376546838U;
unsigned long long int var_20 = 14678739995954675519ULL;
unsigned char var_21 = (unsigned char)120;
signed char var_22 = (signed char)-49;
unsigned long long int var_23 = 7457372053907107034ULL;
int arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 772746389;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
