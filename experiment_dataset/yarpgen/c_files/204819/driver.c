#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 10482950924477857868ULL;
unsigned char var_11 = (unsigned char)236;
unsigned short var_13 = (unsigned short)20917;
int zero = 0;
signed char var_14 = (signed char)122;
_Bool var_15 = (_Bool)0;
int var_16 = -1328738963;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
