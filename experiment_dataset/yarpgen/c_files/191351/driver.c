#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2012745660U;
unsigned short var_7 = (unsigned short)31366;
unsigned short var_14 = (unsigned short)27060;
int zero = 0;
signed char var_18 = (signed char)30;
int var_19 = 1974193187;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
