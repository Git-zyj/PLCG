#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
int var_6 = -80905508;
unsigned char var_7 = (unsigned char)207;
signed char var_8 = (signed char)-63;
_Bool var_13 = (_Bool)0;
int var_14 = 327635922;
signed char var_15 = (signed char)38;
int zero = 0;
int var_16 = 1312604028;
int var_17 = -627194152;
signed char var_18 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
