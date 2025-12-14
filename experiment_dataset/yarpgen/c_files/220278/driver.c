#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)225;
short var_6 = (short)26510;
unsigned short var_8 = (unsigned short)49853;
long long int var_9 = -6279170780342341546LL;
unsigned long long int var_15 = 9297217368481532901ULL;
short var_16 = (short)30873;
int zero = 0;
int var_17 = 720747799;
unsigned int var_18 = 1075163014U;
short var_19 = (short)-630;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
