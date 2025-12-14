#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)26164;
signed char var_9 = (signed char)-110;
unsigned int var_12 = 1777003687U;
int zero = 0;
short var_16 = (short)-3828;
unsigned char var_17 = (unsigned char)179;
short var_18 = (short)15787;
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
