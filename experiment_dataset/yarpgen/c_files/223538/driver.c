#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1126;
long long int var_3 = 7090687826338767189LL;
long long int var_6 = 1052479074502361741LL;
unsigned char var_8 = (unsigned char)83;
short var_10 = (short)660;
int zero = 0;
unsigned int var_11 = 3606420075U;
short var_12 = (short)28487;
void init() {
}

void checksum() {
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
