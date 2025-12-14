#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1343524970335945787ULL;
unsigned char var_4 = (unsigned char)249;
unsigned int var_6 = 2612812754U;
signed char var_7 = (signed char)60;
unsigned int var_11 = 3434471616U;
int zero = 0;
long long int var_14 = -5096660052545163780LL;
short var_15 = (short)-1846;
signed char var_16 = (signed char)-108;
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
