#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1621765938432674378ULL;
unsigned char var_3 = (unsigned char)40;
unsigned char var_7 = (unsigned char)137;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 14358117672236179190ULL;
int zero = 0;
int var_13 = 1755699100;
unsigned long long int var_14 = 4957716643933790778ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
