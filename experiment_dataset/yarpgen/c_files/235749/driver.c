#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)124;
signed char var_2 = (signed char)-28;
unsigned short var_3 = (unsigned short)12073;
signed char var_7 = (signed char)11;
long long int var_16 = -4748291866902397002LL;
int zero = 0;
unsigned int var_20 = 670335816U;
unsigned long long int var_21 = 15970540897537686745ULL;
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
