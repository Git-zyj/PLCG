#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32474;
int var_3 = 1331563257;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-60;
int zero = 0;
long long int var_13 = -8059773577447355937LL;
long long int var_14 = 5004697970103020050LL;
unsigned char var_15 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
