#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_4 = (short)-16918;
signed char var_5 = (signed char)-105;
int var_7 = -1036615720;
int var_8 = 1624348327;
short var_10 = (short)18120;
int zero = 0;
signed char var_11 = (signed char)-31;
unsigned long long int var_12 = 7817746059000118833ULL;
signed char var_13 = (signed char)-37;
unsigned long long int var_14 = 9558341360011584969ULL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
