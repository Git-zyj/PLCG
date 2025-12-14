#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4699153152896763669LL;
long long int var_2 = -1294582372085264585LL;
int var_8 = 1341586588;
long long int var_10 = 71222323550600157LL;
int zero = 0;
unsigned short var_16 = (unsigned short)19029;
unsigned short var_17 = (unsigned short)10311;
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
