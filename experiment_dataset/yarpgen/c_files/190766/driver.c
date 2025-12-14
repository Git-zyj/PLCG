#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)21319;
int var_6 = 1627039592;
unsigned short var_7 = (unsigned short)44948;
signed char var_8 = (signed char)10;
short var_9 = (short)-27664;
unsigned short var_10 = (unsigned short)16229;
int zero = 0;
signed char var_11 = (signed char)110;
unsigned short var_12 = (unsigned short)32026;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
