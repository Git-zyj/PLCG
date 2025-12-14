#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
int var_1 = 2147077917;
signed char var_2 = (signed char)-17;
long long int var_6 = -3171084943766286059LL;
unsigned short var_7 = (unsigned short)56848;
int var_11 = 145814617;
long long int var_12 = -8120789272000784579LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-89;
unsigned long long int var_15 = 14511132695148070278ULL;
unsigned int var_16 = 404743631U;
unsigned long long int var_17 = 17809823214428550081ULL;
unsigned int var_18 = 4020407518U;
short var_19 = (short)2665;
unsigned int arr_5 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 810391872U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
