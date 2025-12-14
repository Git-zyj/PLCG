#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)213;
unsigned int var_8 = 1012879296U;
long long int var_11 = -2619101214854323018LL;
signed char var_12 = (signed char)-57;
int var_17 = -1400000225;
int zero = 0;
unsigned long long int var_19 = 379885447037995721ULL;
signed char var_20 = (signed char)-17;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)164;
long long int var_23 = -6699140178452585207LL;
unsigned long long int arr_6 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 14526701482135274708ULL;
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
