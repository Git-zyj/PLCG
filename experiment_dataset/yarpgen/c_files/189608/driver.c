#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)76;
short var_2 = (short)10209;
unsigned long long int var_3 = 8074410520014563287ULL;
unsigned char var_4 = (unsigned char)232;
unsigned long long int var_9 = 314848866105937938ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)51;
unsigned long long int var_11 = 6003218788276415516ULL;
unsigned long long int var_12 = 2638713200135882692ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
