#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7882133497220166261LL;
short var_6 = (short)-7485;
unsigned int var_9 = 571574988U;
unsigned short var_11 = (unsigned short)50510;
unsigned short var_15 = (unsigned short)26765;
int zero = 0;
unsigned int var_16 = 2807867979U;
long long int var_17 = 4745692619445507486LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
