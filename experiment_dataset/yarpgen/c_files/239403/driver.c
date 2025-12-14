#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)47809;
_Bool var_9 = (_Bool)0;
long long int var_11 = 4816984149430159488LL;
unsigned short var_16 = (unsigned short)37168;
int zero = 0;
unsigned char var_19 = (unsigned char)14;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)132;
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
