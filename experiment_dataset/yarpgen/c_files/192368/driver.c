#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2954061356U;
unsigned long long int var_3 = 6815379380989159284ULL;
unsigned short var_5 = (unsigned short)53085;
int var_7 = -1581547261;
int var_11 = 1679056312;
short var_15 = (short)-9037;
unsigned char var_18 = (unsigned char)230;
int zero = 0;
long long int var_19 = -6407503348452347747LL;
signed char var_20 = (signed char)107;
long long int var_21 = -5267086589560906230LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
