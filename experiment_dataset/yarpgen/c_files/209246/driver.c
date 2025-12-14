#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1874622122;
int var_4 = -792643117;
long long int var_5 = 6401473986720837863LL;
long long int var_6 = 4278450849477706740LL;
unsigned long long int var_9 = 13358373083776991169ULL;
long long int var_10 = 150594593441596425LL;
unsigned long long int var_11 = 12315788840445121784ULL;
int zero = 0;
long long int var_12 = 2822064382563238404LL;
unsigned short var_13 = (unsigned short)4990;
short var_14 = (short)-23627;
int var_15 = -162327940;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
