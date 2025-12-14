#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1129940069;
unsigned long long int var_8 = 13047479133311427179ULL;
unsigned long long int var_9 = 7396294439002310848ULL;
int zero = 0;
unsigned long long int var_11 = 6647704911718995180ULL;
unsigned int var_12 = 243896197U;
short var_13 = (short)-12738;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
