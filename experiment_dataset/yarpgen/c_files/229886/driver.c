#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1461184219;
int var_3 = 1457517181;
signed char var_4 = (signed char)-30;
unsigned short var_5 = (unsigned short)33370;
int var_8 = 1838597508;
short var_11 = (short)-8142;
int zero = 0;
unsigned char var_12 = (unsigned char)7;
short var_13 = (short)-24529;
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
