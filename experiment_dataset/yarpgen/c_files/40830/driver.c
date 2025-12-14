#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 92501325809932032ULL;
unsigned short var_14 = (unsigned short)62864;
unsigned short var_15 = (unsigned short)7540;
int zero = 0;
signed char var_20 = (signed char)-110;
unsigned short var_21 = (unsigned short)28376;
int var_22 = -1910647664;
void init() {
}

void checksum() {
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
