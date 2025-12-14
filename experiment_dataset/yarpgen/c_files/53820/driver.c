#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7130;
signed char var_4 = (signed char)-126;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)39;
signed char var_8 = (signed char)36;
_Bool var_9 = (_Bool)1;
signed char var_14 = (signed char)101;
int zero = 0;
unsigned short var_20 = (unsigned short)54544;
unsigned short var_21 = (unsigned short)31583;
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
