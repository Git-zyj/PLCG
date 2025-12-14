#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1047155521;
unsigned int var_4 = 2132007345U;
unsigned int var_8 = 346291835U;
unsigned long long int var_10 = 8390809406290058234ULL;
long long int var_13 = 2821137556745816941LL;
unsigned short var_18 = (unsigned short)16346;
int zero = 0;
unsigned char var_19 = (unsigned char)9;
long long int var_20 = -6610404441697530694LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
