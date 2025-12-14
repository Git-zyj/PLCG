#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)44261;
unsigned long long int var_4 = 6862846795630557381ULL;
signed char var_5 = (signed char)5;
long long int var_6 = -9146913849176176043LL;
unsigned int var_9 = 2016461743U;
int zero = 0;
short var_10 = (short)-2138;
unsigned int var_11 = 2271529249U;
long long int var_12 = -3527182811179966985LL;
long long int var_13 = 2736872443542765984LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
