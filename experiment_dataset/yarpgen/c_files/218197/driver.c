#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43720;
unsigned short var_3 = (unsigned short)22040;
unsigned long long int var_4 = 11377723867712307617ULL;
int var_7 = -975455109;
unsigned char var_8 = (unsigned char)189;
int zero = 0;
unsigned long long int var_10 = 17721894549059283808ULL;
unsigned int var_11 = 2087188697U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
