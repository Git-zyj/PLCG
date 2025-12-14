#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -456718018;
int var_8 = 5773155;
int var_12 = 982546603;
short var_13 = (short)10382;
int var_18 = -1099254094;
int zero = 0;
signed char var_19 = (signed char)29;
unsigned short var_20 = (unsigned short)813;
signed char var_21 = (signed char)18;
signed char var_22 = (signed char)-46;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
