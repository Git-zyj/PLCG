#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
signed char var_12 = (signed char)89;
int zero = 0;
unsigned short var_19 = (unsigned short)9783;
unsigned int var_20 = 3330105994U;
unsigned short var_21 = (unsigned short)45193;
unsigned short var_22 = (unsigned short)31015;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
