#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7054228527417953319ULL;
unsigned long long int var_4 = 2355917057773405970ULL;
signed char var_6 = (signed char)-36;
unsigned char var_7 = (unsigned char)207;
unsigned char var_9 = (unsigned char)160;
int zero = 0;
int var_10 = -865510968;
long long int var_11 = 2490408354957587053LL;
int var_12 = 35633182;
int var_13 = 836866939;
unsigned int arr_1 [12] ;
long long int arr_2 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2777471897U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 4913272634308128855LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
