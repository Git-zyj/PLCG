#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39515;
signed char var_3 = (signed char)-121;
int var_8 = -306080734;
int zero = 0;
unsigned short var_15 = (unsigned short)20068;
unsigned short var_16 = (unsigned short)7362;
int var_17 = -1248811356;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
