#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2807899878U;
unsigned char var_5 = (unsigned char)116;
unsigned int var_6 = 3073350212U;
signed char var_7 = (signed char)94;
int zero = 0;
signed char var_17 = (signed char)-5;
unsigned int var_18 = 2137290261U;
long long int var_19 = -2267474520222544323LL;
int var_20 = 844758859;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
