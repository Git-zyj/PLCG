#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-124;
unsigned long long int var_3 = 14410291318436819473ULL;
unsigned char var_9 = (unsigned char)252;
long long int var_16 = -6455416617184673082LL;
int zero = 0;
unsigned short var_19 = (unsigned short)31960;
int var_20 = 1869900478;
unsigned short var_21 = (unsigned short)65120;
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
