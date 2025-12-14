#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)9529;
unsigned char var_14 = (unsigned char)56;
unsigned short var_17 = (unsigned short)24150;
int zero = 0;
unsigned char var_19 = (unsigned char)94;
_Bool var_20 = (_Bool)1;
int var_21 = -810934391;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
