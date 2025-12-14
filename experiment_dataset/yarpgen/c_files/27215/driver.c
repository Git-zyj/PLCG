#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7464;
unsigned short var_7 = (unsigned short)51599;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_18 = 1755247651717404026LL;
unsigned char var_19 = (unsigned char)23;
long long int var_20 = -5519364802080255039LL;
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
