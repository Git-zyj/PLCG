#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32471;
unsigned int var_6 = 189205583U;
unsigned int var_8 = 3323310094U;
short var_9 = (short)27774;
int var_10 = -1507182748;
int var_11 = -1637640941;
signed char var_14 = (signed char)-55;
int zero = 0;
signed char var_17 = (signed char)-49;
long long int var_18 = -7635218153535094835LL;
long long int var_19 = -3327478078130594043LL;
short var_20 = (short)-12961;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
