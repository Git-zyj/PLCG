#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9214;
unsigned char var_6 = (unsigned char)240;
unsigned int var_7 = 1709785817U;
int zero = 0;
unsigned long long int var_16 = 2973767401331653168ULL;
unsigned char var_17 = (unsigned char)146;
unsigned long long int var_18 = 5597986105403555442ULL;
unsigned int var_19 = 3825284596U;
signed char var_20 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
