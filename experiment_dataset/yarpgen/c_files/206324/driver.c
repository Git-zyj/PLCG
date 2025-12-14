#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
unsigned long long int var_3 = 3772098239751717435ULL;
short var_5 = (short)-11004;
long long int var_7 = -7057717960328889245LL;
signed char var_8 = (signed char)-87;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)81;
unsigned int var_14 = 691826245U;
void init() {
}

void checksum() {
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
