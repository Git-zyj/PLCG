#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9995;
short var_1 = (short)-15316;
unsigned int var_3 = 1124654685U;
unsigned int var_8 = 2075689702U;
unsigned short var_9 = (unsigned short)5966;
unsigned char var_13 = (unsigned char)140;
int zero = 0;
unsigned int var_15 = 3993844134U;
unsigned long long int var_16 = 9633991641176828396ULL;
void init() {
}

void checksum() {
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
