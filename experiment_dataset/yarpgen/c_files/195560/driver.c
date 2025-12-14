#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2505832195U;
unsigned short var_5 = (unsigned short)62105;
signed char var_7 = (signed char)92;
signed char var_9 = (signed char)61;
signed char var_12 = (signed char)-114;
int zero = 0;
unsigned short var_15 = (unsigned short)17715;
signed char var_16 = (signed char)-21;
unsigned int var_17 = 3837781528U;
unsigned char var_18 = (unsigned char)18;
unsigned long long int arr_0 [24] ;
unsigned long long int arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 14820178335186675778ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 6291610099241047089ULL;
}

void checksum() {
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
