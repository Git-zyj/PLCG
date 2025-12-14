#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 166438446U;
short var_9 = (short)-29543;
long long int var_12 = -2674393786193600945LL;
short var_15 = (short)28917;
int zero = 0;
unsigned long long int var_18 = 4426157827390608659ULL;
unsigned int var_19 = 3641319505U;
void init() {
}

void checksum() {
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
