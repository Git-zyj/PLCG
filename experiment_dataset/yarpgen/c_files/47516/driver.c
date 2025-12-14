#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1080561397;
long long int var_1 = 7595213032603935098LL;
long long int var_6 = 8337554569005689900LL;
int zero = 0;
unsigned int var_20 = 3894451160U;
long long int var_21 = 2112873810597279167LL;
unsigned char var_22 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
