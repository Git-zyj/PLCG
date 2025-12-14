#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)104;
unsigned int var_2 = 4142235906U;
signed char var_3 = (signed char)-49;
unsigned int var_5 = 620812786U;
short var_6 = (short)6888;
signed char var_7 = (signed char)-42;
int var_8 = -1164388855;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 296578945769504428ULL;
unsigned int var_13 = 3535089853U;
int var_14 = -747127256;
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
