#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
unsigned short var_2 = (unsigned short)22529;
unsigned int var_3 = 76303388U;
signed char var_5 = (signed char)-124;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)64620;
unsigned int var_18 = 475634998U;
int zero = 0;
short var_20 = (short)-10238;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)43036;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
