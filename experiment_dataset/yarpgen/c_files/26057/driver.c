#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)73;
int var_7 = 1576477948;
unsigned int var_9 = 1982702289U;
long long int var_10 = 1653908701331378612LL;
unsigned short var_13 = (unsigned short)24693;
int var_14 = 180692986;
int zero = 0;
unsigned long long int var_16 = 14546219237378133385ULL;
unsigned short var_17 = (unsigned short)61996;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
