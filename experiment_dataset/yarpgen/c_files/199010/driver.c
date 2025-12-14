#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5756097423500958589LL;
signed char var_1 = (signed char)-78;
unsigned int var_2 = 3214376528U;
int var_4 = 2077048887;
long long int var_6 = -3231406892178357314LL;
long long int var_8 = -8046379844641388819LL;
short var_9 = (short)-32512;
int zero = 0;
short var_14 = (short)1345;
short var_15 = (short)11898;
signed char var_16 = (signed char)58;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
