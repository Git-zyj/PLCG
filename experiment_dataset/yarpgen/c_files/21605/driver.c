#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7715242400774660991LL;
short var_5 = (short)551;
unsigned short var_10 = (unsigned short)58234;
int var_12 = 323577438;
int zero = 0;
signed char var_14 = (signed char)-115;
unsigned long long int var_15 = 11434761342472629247ULL;
unsigned char var_16 = (unsigned char)156;
short var_17 = (short)27031;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
