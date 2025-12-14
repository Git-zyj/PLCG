#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
short var_2 = (short)-2667;
signed char var_3 = (signed char)26;
unsigned long long int var_4 = 15073817874803051431ULL;
long long int var_8 = -7503751337217466138LL;
int zero = 0;
unsigned short var_12 = (unsigned short)3287;
unsigned long long int var_13 = 1249763886318471750ULL;
unsigned int var_14 = 835210541U;
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
