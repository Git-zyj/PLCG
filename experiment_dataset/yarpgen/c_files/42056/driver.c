#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7679670775137603249LL;
unsigned int var_4 = 419950230U;
long long int var_5 = -6545649132730901006LL;
unsigned char var_6 = (unsigned char)187;
int var_18 = 870761538;
int zero = 0;
unsigned short var_19 = (unsigned short)63039;
long long int var_20 = 8407663356929284931LL;
void init() {
}

void checksum() {
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
