#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10078281829639958570ULL;
unsigned short var_4 = (unsigned short)4347;
int var_6 = 960422816;
int zero = 0;
signed char var_16 = (signed char)85;
unsigned long long int var_17 = 14114518005575857306ULL;
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
