#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -902941780;
long long int var_9 = 434054327931767374LL;
short var_14 = (short)10317;
short var_18 = (short)-12484;
int zero = 0;
unsigned char var_20 = (unsigned char)122;
unsigned long long int var_21 = 17128972502121635490ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
