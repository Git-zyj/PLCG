#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1792853676321967979LL;
signed char var_2 = (signed char)-8;
unsigned int var_5 = 346124341U;
short var_7 = (short)-330;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)26896;
int zero = 0;
signed char var_15 = (signed char)114;
int var_16 = -359169001;
unsigned int var_17 = 1702557384U;
void init() {
}

void checksum() {
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
