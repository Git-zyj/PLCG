#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-30226;
unsigned char var_8 = (unsigned char)220;
unsigned long long int var_9 = 4982630347593116909ULL;
unsigned long long int var_11 = 5773531008768333094ULL;
signed char var_12 = (signed char)91;
int var_14 = -313585560;
int zero = 0;
short var_15 = (short)1531;
signed char var_16 = (signed char)-95;
int var_17 = 225003324;
long long int var_18 = 4534537002539325198LL;
unsigned long long int var_19 = 2587753623548322800ULL;
unsigned long long int arr_2 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 13109951040814386436ULL;
}

void checksum() {
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
