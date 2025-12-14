#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)88;
short var_9 = (short)17754;
short var_15 = (short)-16632;
short var_18 = (short)-11799;
short var_19 = (short)-23060;
int zero = 0;
unsigned char var_20 = (unsigned char)194;
unsigned int var_21 = 1396940546U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
