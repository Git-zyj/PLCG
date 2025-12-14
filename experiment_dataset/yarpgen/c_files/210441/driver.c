#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17636152520110309560ULL;
signed char var_1 = (signed char)-58;
unsigned short var_3 = (unsigned short)63384;
unsigned long long int var_8 = 13396160388117643623ULL;
int var_9 = 842175458;
unsigned short var_12 = (unsigned short)59324;
unsigned int var_14 = 3361143279U;
unsigned int var_15 = 2665129594U;
int zero = 0;
unsigned long long int var_16 = 4413994258076454937ULL;
short var_17 = (short)15124;
unsigned short var_18 = (unsigned short)32895;
void init() {
}

void checksum() {
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
