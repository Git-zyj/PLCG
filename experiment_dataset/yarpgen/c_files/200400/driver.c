#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33163;
unsigned int var_3 = 4092385985U;
unsigned char var_5 = (unsigned char)168;
unsigned long long int var_8 = 14177315247505562585ULL;
unsigned int var_10 = 659558682U;
unsigned long long int var_13 = 6290317893878288376ULL;
int zero = 0;
long long int var_19 = -6733020258708008761LL;
long long int var_20 = 2876073814608316979LL;
long long int var_21 = -4089727067683731881LL;
long long int var_22 = 1859248107353123658LL;
unsigned int arr_7 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 4003948156U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
