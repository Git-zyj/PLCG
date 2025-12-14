#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 83518630;
unsigned long long int var_3 = 11208775793063595773ULL;
unsigned int var_6 = 2060616808U;
unsigned long long int var_7 = 3888475527093336379ULL;
int zero = 0;
unsigned long long int var_13 = 11395366990369758470ULL;
int var_14 = 420886882;
unsigned short var_15 = (unsigned short)26404;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-29764;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
