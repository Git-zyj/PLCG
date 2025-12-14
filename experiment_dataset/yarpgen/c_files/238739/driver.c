#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 481606154U;
unsigned int var_2 = 2109509216U;
unsigned int var_5 = 2060636763U;
short var_6 = (short)10626;
unsigned char var_8 = (unsigned char)243;
short var_9 = (short)-22309;
short var_14 = (short)6455;
signed char var_15 = (signed char)60;
unsigned int var_16 = 433553793U;
int zero = 0;
unsigned long long int var_19 = 10978523845554224556ULL;
short var_20 = (short)-12682;
short var_21 = (short)17346;
long long int var_22 = 2818725027171741311LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
