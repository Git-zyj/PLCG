#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2525553602U;
long long int var_3 = -4436305826692103352LL;
unsigned short var_8 = (unsigned short)32612;
signed char var_10 = (signed char)81;
unsigned int var_15 = 3236766291U;
int zero = 0;
unsigned char var_17 = (unsigned char)18;
short var_18 = (short)2871;
int var_19 = 1779161551;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
