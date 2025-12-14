#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10666684241094498414ULL;
unsigned int var_7 = 3610279671U;
long long int var_8 = 2135125582521957293LL;
short var_10 = (short)-17861;
unsigned int var_11 = 4188651141U;
unsigned int var_15 = 499702255U;
long long int var_16 = -5441301530992031130LL;
int zero = 0;
unsigned char var_18 = (unsigned char)227;
unsigned long long int var_19 = 10853454643826466248ULL;
signed char var_20 = (signed char)27;
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
