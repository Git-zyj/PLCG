#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7830676157025138300LL;
unsigned char var_2 = (unsigned char)150;
short var_3 = (short)-8216;
long long int var_5 = 7301171208146227526LL;
long long int var_6 = 6951831327049752858LL;
int var_8 = 1429287724;
int var_9 = -1155551169;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = -281003294;
unsigned int var_12 = 1623630723U;
signed char var_13 = (signed char)38;
signed char var_14 = (signed char)-12;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
