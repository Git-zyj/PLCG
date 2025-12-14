#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)243;
signed char var_2 = (signed char)-80;
unsigned long long int var_5 = 12363950014807203418ULL;
unsigned short var_6 = (unsigned short)21331;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3742438821U;
unsigned int var_10 = 3395155948U;
int zero = 0;
long long int var_13 = 6291146121139483522LL;
short var_14 = (short)-29107;
_Bool var_15 = (_Bool)1;
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
