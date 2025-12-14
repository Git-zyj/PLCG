#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
long long int var_2 = -4335924364986785486LL;
unsigned char var_9 = (unsigned char)190;
int zero = 0;
unsigned char var_15 = (unsigned char)61;
signed char var_16 = (signed char)-7;
short var_17 = (short)-2127;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
