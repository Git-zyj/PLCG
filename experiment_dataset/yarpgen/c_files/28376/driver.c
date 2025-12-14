#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)195;
int var_4 = 1566122046;
unsigned long long int var_6 = 16281030601547239477ULL;
int zero = 0;
int var_12 = 508773860;
unsigned short var_13 = (unsigned short)37087;
unsigned long long int var_14 = 13795361892567303970ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
