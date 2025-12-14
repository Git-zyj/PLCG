#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2043576274344782302ULL;
short var_9 = (short)8982;
int zero = 0;
unsigned short var_16 = (unsigned short)10507;
unsigned int var_17 = 3864356901U;
signed char var_18 = (signed char)46;
short var_19 = (short)17360;
void init() {
}

void checksum() {
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
