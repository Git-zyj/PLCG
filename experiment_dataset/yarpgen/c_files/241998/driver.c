#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 13145742167970162871ULL;
short var_10 = (short)5294;
_Bool var_11 = (_Bool)1;
unsigned char var_14 = (unsigned char)100;
int zero = 0;
unsigned char var_19 = (unsigned char)170;
short var_20 = (short)29047;
unsigned char var_21 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
