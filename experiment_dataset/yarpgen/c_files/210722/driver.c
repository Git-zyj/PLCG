#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-20313;
_Bool var_4 = (_Bool)0;
unsigned char var_10 = (unsigned char)132;
int zero = 0;
unsigned short var_18 = (unsigned short)53863;
long long int var_19 = 805595527817880979LL;
unsigned long long int var_20 = 7286559429919975870ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
