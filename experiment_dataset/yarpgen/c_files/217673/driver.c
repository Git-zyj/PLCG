#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8775574097504438732LL;
int var_7 = 499822898;
long long int var_8 = 4539071507524607563LL;
int var_9 = -967381381;
unsigned long long int var_14 = 16661688829254413422ULL;
unsigned long long int var_17 = 9750096342421687364ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)144;
unsigned char var_20 = (unsigned char)108;
long long int var_21 = -138449874190001265LL;
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
