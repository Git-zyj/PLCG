#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
unsigned long long int var_1 = 1676561254574115179ULL;
unsigned short var_5 = (unsigned short)46633;
signed char var_8 = (signed char)-9;
short var_13 = (short)2076;
short var_15 = (short)5422;
int zero = 0;
unsigned long long int var_17 = 10467879125140105679ULL;
int var_18 = 1193192225;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
