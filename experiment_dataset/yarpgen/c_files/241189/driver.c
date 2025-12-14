#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3098168699449240369ULL;
unsigned short var_6 = (unsigned short)40495;
unsigned char var_7 = (unsigned char)185;
signed char var_11 = (signed char)-41;
int var_12 = 1343819168;
int zero = 0;
int var_13 = 1402254645;
long long int var_14 = -7109102958634227477LL;
void init() {
}

void checksum() {
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
