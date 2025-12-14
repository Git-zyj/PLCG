#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6975697986513898229LL;
unsigned long long int var_2 = 12222591457785514624ULL;
unsigned char var_3 = (unsigned char)151;
int var_6 = -557874046;
short var_7 = (short)-21678;
unsigned short var_8 = (unsigned short)10000;
signed char var_9 = (signed char)-42;
short var_11 = (short)18599;
int zero = 0;
unsigned long long int var_12 = 4171462126425505621ULL;
unsigned int var_13 = 458982382U;
unsigned int var_14 = 1700676350U;
void init() {
}

void checksum() {
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
