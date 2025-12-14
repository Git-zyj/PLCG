#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -232953261;
long long int var_7 = -6532810262898858780LL;
unsigned short var_9 = (unsigned short)55088;
unsigned short var_10 = (unsigned short)25118;
int var_11 = 1016258929;
int zero = 0;
long long int var_13 = -1875558585088365407LL;
signed char var_14 = (signed char)-1;
int var_15 = 31721645;
unsigned long long int var_16 = 2778412964029557635ULL;
int var_17 = 844285524;
signed char var_18 = (signed char)-114;
unsigned long long int arr_8 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 10565111692897848734ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
