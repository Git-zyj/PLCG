#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-12581;
int var_6 = 1366120161;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 16203539720073209105ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 3656275425615783196LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
