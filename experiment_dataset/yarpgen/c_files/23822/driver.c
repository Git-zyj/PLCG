#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29554;
signed char var_2 = (signed char)82;
signed char var_7 = (signed char)-44;
unsigned short var_15 = (unsigned short)33248;
signed char var_16 = (signed char)-32;
int zero = 0;
signed char var_17 = (signed char)-40;
signed char var_18 = (signed char)74;
unsigned int var_19 = 1274645375U;
void init() {
}

void checksum() {
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
