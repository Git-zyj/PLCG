#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3094051649U;
short var_6 = (short)-1571;
unsigned long long int var_7 = 16254799551656841857ULL;
signed char var_8 = (signed char)-80;
short var_11 = (short)-12912;
int var_16 = 369009756;
signed char var_18 = (signed char)118;
int zero = 0;
signed char var_19 = (signed char)-55;
unsigned int var_20 = 4181512869U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
