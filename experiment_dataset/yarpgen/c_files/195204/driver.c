#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-2656;
long long int var_4 = -5669399706256315356LL;
unsigned short var_6 = (unsigned short)48334;
int var_13 = -2093718633;
int zero = 0;
long long int var_19 = 2473138699525908921LL;
int var_20 = 617566173;
short var_21 = (short)-2560;
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
