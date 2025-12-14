#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)135;
unsigned short var_8 = (unsigned short)37307;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)44816;
unsigned short var_20 = (unsigned short)33638;
unsigned int var_21 = 4218986642U;
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
