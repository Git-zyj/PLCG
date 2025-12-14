#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3668132823U;
short var_2 = (short)31298;
unsigned short var_3 = (unsigned short)20684;
short var_4 = (short)-3628;
unsigned long long int var_5 = 10021121700807710077ULL;
unsigned short var_7 = (unsigned short)24020;
unsigned short var_8 = (unsigned short)46274;
int zero = 0;
short var_10 = (short)24708;
unsigned short var_11 = (unsigned short)52771;
signed char var_12 = (signed char)-70;
unsigned short var_13 = (unsigned short)41109;
int var_14 = 1291730692;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
