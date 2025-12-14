#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15916494853336483472ULL;
unsigned char var_7 = (unsigned char)147;
unsigned int var_10 = 3784944202U;
int zero = 0;
unsigned short var_18 = (unsigned short)8927;
unsigned long long int var_19 = 8740292548893887726ULL;
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
