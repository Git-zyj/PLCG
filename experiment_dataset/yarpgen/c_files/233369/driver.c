#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)108;
unsigned char var_4 = (unsigned char)193;
unsigned char var_10 = (unsigned char)145;
int var_11 = -581202863;
int var_13 = -41535807;
int zero = 0;
unsigned char var_15 = (unsigned char)110;
unsigned long long int var_16 = 1942213577888642783ULL;
unsigned char var_17 = (unsigned char)218;
unsigned short var_18 = (unsigned short)23038;
long long int var_19 = 4576345980408975628LL;
unsigned int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 263751288U;
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
