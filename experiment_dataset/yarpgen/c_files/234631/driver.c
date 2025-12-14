#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5522634215048097881LL;
signed char var_3 = (signed char)-121;
unsigned short var_6 = (unsigned short)51087;
int zero = 0;
long long int var_16 = 7762197817826299653LL;
signed char var_17 = (signed char)-99;
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
