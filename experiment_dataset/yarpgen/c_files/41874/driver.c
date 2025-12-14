#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10030883173298297987ULL;
signed char var_5 = (signed char)-30;
signed char var_6 = (signed char)-74;
short var_7 = (short)-22703;
unsigned short var_14 = (unsigned short)4093;
int zero = 0;
short var_18 = (short)17948;
unsigned short var_19 = (unsigned short)5227;
long long int var_20 = -5384141411420181319LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
