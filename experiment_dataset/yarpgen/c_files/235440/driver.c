#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)124;
signed char var_1 = (signed char)9;
short var_5 = (short)14846;
long long int var_6 = 6370210124781376989LL;
short var_8 = (short)-15189;
int var_9 = -621042114;
signed char var_12 = (signed char)-38;
int zero = 0;
unsigned long long int var_15 = 4679256507901398400ULL;
int var_16 = -344049464;
void init() {
}

void checksum() {
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
