#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)28;
unsigned char var_5 = (unsigned char)37;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
short var_15 = (short)-13025;
int zero = 0;
unsigned long long int var_18 = 2816399275452468567ULL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 285164585U;
int var_21 = 1307809581;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
