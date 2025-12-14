#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25745;
long long int var_5 = -4159550412384869109LL;
unsigned long long int var_8 = 18233596254500899908ULL;
long long int var_16 = -6375630475867263734LL;
int zero = 0;
unsigned long long int var_20 = 11055850427625586211ULL;
unsigned long long int var_21 = 1764324215369624618ULL;
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
