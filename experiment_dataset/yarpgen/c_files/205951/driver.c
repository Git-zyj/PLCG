#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18044236039305565420ULL;
unsigned short var_4 = (unsigned short)61998;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)48;
int var_7 = 572245758;
int var_11 = 658876234;
int zero = 0;
unsigned short var_14 = (unsigned short)47259;
unsigned char var_15 = (unsigned char)139;
void init() {
}

void checksum() {
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
