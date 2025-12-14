#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 570216917U;
long long int var_2 = -8187118710770170714LL;
unsigned char var_3 = (unsigned char)0;
unsigned int var_4 = 2080276559U;
unsigned int var_8 = 292708651U;
unsigned char var_9 = (unsigned char)27;
long long int var_12 = -1717633063143433655LL;
int zero = 0;
unsigned char var_14 = (unsigned char)18;
unsigned int var_15 = 4010808653U;
unsigned int var_16 = 3545920921U;
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
