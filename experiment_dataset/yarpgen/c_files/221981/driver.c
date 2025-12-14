#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 257647203760608526LL;
long long int var_4 = -4097374546386429343LL;
long long int var_7 = 8495373596364443946LL;
int zero = 0;
unsigned int var_12 = 1941227379U;
long long int var_13 = 4861257186707459713LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
