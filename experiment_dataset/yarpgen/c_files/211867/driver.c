#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 8458326728567844692LL;
short var_11 = (short)-17393;
int zero = 0;
signed char var_18 = (signed char)37;
unsigned long long int var_19 = 6215585945931295753ULL;
unsigned short var_20 = (unsigned short)9268;
void init() {
}

void checksum() {
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
