#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-85;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)38;
unsigned int var_9 = 697957093U;
long long int var_10 = -2577360469438726202LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 1769954247158383646ULL;
int var_14 = 1054416507;
unsigned char var_15 = (unsigned char)189;
unsigned char var_16 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
