#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-89;
unsigned char var_6 = (unsigned char)155;
signed char var_9 = (signed char)-88;
unsigned int var_10 = 2539609730U;
unsigned int var_12 = 2253652800U;
unsigned char var_13 = (unsigned char)78;
short var_14 = (short)-7449;
int zero = 0;
unsigned char var_15 = (unsigned char)58;
unsigned int var_16 = 540346495U;
signed char var_17 = (signed char)-93;
long long int var_18 = 6755078480129086061LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
