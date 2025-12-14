#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)5590;
unsigned long long int var_6 = 12626756113432478856ULL;
short var_13 = (short)30948;
int zero = 0;
long long int var_20 = -5519198814556136097LL;
long long int var_21 = -936552584402231307LL;
short var_22 = (short)-30111;
void init() {
}

void checksum() {
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
