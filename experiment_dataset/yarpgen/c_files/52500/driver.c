#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)18855;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 11742731570075893346ULL;
int zero = 0;
signed char var_13 = (signed char)-48;
short var_14 = (short)-10172;
unsigned char var_15 = (unsigned char)107;
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
