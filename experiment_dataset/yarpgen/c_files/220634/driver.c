#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)306;
signed char var_4 = (signed char)-26;
unsigned short var_5 = (unsigned short)49115;
unsigned short var_14 = (unsigned short)17351;
int var_16 = -511547197;
unsigned int var_17 = 1423334563U;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)57;
signed char var_21 = (signed char)37;
unsigned long long int var_22 = 8537436939483380058ULL;
unsigned short var_23 = (unsigned short)39303;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
