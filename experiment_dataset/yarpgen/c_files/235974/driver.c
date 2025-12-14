#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
unsigned char var_1 = (unsigned char)163;
unsigned short var_2 = (unsigned short)55364;
unsigned char var_5 = (unsigned char)96;
unsigned char var_8 = (unsigned char)19;
signed char var_9 = (signed char)-53;
short var_10 = (short)8959;
signed char var_11 = (signed char)-38;
short var_12 = (short)-991;
int zero = 0;
unsigned long long int var_13 = 16708911743480622259ULL;
unsigned short var_14 = (unsigned short)21717;
unsigned short var_15 = (unsigned short)12893;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
