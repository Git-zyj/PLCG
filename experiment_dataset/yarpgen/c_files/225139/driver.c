#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)20;
unsigned char var_4 = (unsigned char)231;
long long int var_8 = -4286956257172725405LL;
long long int var_11 = 8044391494718778395LL;
int var_12 = 773244487;
int zero = 0;
unsigned long long int var_14 = 12133455384236293004ULL;
unsigned short var_15 = (unsigned short)22251;
void init() {
}

void checksum() {
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
