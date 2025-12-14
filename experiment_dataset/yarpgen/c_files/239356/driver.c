#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2110537735;
int var_3 = 621690664;
int var_7 = 1533348767;
int zero = 0;
long long int var_12 = 8975023121375592709LL;
int var_13 = 1914994705;
int var_14 = 901213881;
int var_15 = -1002606936;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
