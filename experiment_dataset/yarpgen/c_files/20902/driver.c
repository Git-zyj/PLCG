#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 646331396;
unsigned short var_8 = (unsigned short)32579;
signed char var_9 = (signed char)-19;
int zero = 0;
signed char var_16 = (signed char)-23;
short var_17 = (short)22414;
int var_18 = 1410682691;
signed char var_19 = (signed char)-29;
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
