#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)122;
int var_7 = -1686937374;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)12777;
long long int var_14 = 8418620785184371792LL;
int var_18 = -1080415941;
int zero = 0;
unsigned short var_20 = (unsigned short)63876;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
