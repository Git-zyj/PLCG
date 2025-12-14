#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39012;
unsigned int var_5 = 2150564002U;
unsigned short var_10 = (unsigned short)91;
short var_13 = (short)-13861;
unsigned int var_15 = 1791304176U;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 18087279502940002420ULL;
unsigned long long int var_19 = 17620946671436705981ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
