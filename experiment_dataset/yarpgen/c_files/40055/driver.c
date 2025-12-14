#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -242511076;
unsigned short var_7 = (unsigned short)38206;
_Bool var_8 = (_Bool)0;
short var_10 = (short)23366;
long long int var_12 = 5482728697674860830LL;
int zero = 0;
signed char var_19 = (signed char)51;
unsigned char var_20 = (unsigned char)162;
void init() {
}

void checksum() {
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
