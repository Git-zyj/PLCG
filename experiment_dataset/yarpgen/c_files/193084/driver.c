#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16120817898977541552ULL;
unsigned char var_6 = (unsigned char)150;
signed char var_7 = (signed char)49;
unsigned short var_12 = (unsigned short)49431;
unsigned long long int var_13 = 4402055598607777986ULL;
int zero = 0;
unsigned long long int var_19 = 2563013903495542191ULL;
unsigned int var_20 = 2106458914U;
unsigned short var_21 = (unsigned short)41536;
unsigned short var_22 = (unsigned short)13670;
void init() {
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
