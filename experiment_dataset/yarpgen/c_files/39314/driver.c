#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42970;
unsigned long long int var_4 = 11061808354023071171ULL;
short var_12 = (short)19847;
int zero = 0;
short var_19 = (short)-16055;
unsigned char var_20 = (unsigned char)103;
unsigned int var_21 = 4244883130U;
long long int var_22 = -7103904816020397983LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
