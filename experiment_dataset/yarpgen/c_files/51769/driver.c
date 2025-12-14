#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-28401;
int var_7 = -120809065;
unsigned int var_8 = 539270832U;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = -101702854;
unsigned char var_11 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
