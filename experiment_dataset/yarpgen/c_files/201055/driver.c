#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)0;
int var_3 = 264406399;
int var_5 = 805963898;
short var_8 = (short)-20687;
unsigned long long int var_9 = 262251568058362690ULL;
long long int var_12 = -2007466995268412053LL;
int zero = 0;
unsigned short var_14 = (unsigned short)6010;
unsigned long long int var_15 = 3226487621822538961ULL;
unsigned char var_16 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
