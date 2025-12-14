#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-43;
short var_4 = (short)-1039;
signed char var_9 = (signed char)83;
short var_11 = (short)26375;
int zero = 0;
short var_14 = (short)-23365;
short var_15 = (short)-8268;
unsigned short var_16 = (unsigned short)58910;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
