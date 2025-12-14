#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7860226584423413999LL;
long long int var_2 = 467971260014116566LL;
long long int var_3 = -3668812024306414924LL;
unsigned short var_4 = (unsigned short)48484;
int var_6 = -1175199365;
long long int var_8 = -1192793808799939147LL;
long long int var_9 = -8032629975959625175LL;
int zero = 0;
short var_10 = (short)-5037;
unsigned char var_11 = (unsigned char)56;
unsigned long long int var_12 = 17661041097347117343ULL;
unsigned long long int var_13 = 6277147784604723422ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
