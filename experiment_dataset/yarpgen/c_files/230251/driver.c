#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33070;
signed char var_2 = (signed char)30;
int var_4 = -1905839424;
signed char var_5 = (signed char)108;
signed char var_8 = (signed char)-97;
int var_18 = -1451477563;
int zero = 0;
unsigned short var_19 = (unsigned short)53950;
unsigned int var_20 = 1596793207U;
unsigned int var_21 = 214175392U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
