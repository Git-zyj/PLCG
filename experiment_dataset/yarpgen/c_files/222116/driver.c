#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -207354220;
unsigned int var_3 = 3303737541U;
unsigned long long int var_8 = 4330282759114317316ULL;
int zero = 0;
long long int var_12 = 2533581218137405631LL;
unsigned int var_13 = 1347008164U;
int var_14 = 20100930;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
