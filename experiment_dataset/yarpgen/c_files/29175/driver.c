#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)31300;
int var_7 = -352508701;
unsigned long long int var_8 = 11194861201428778770ULL;
unsigned short var_10 = (unsigned short)53370;
int zero = 0;
long long int var_18 = -2245626380289589245LL;
signed char var_19 = (signed char)-12;
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
