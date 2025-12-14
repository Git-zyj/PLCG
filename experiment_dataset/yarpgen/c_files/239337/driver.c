#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 376515636;
signed char var_1 = (signed char)-2;
short var_2 = (short)-12700;
int zero = 0;
unsigned long long int var_12 = 6060033885835416636ULL;
unsigned char var_13 = (unsigned char)125;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
