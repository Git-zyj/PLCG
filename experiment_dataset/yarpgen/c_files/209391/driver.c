#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1410069134;
short var_3 = (short)2858;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)-103;
signed char var_18 = (signed char)69;
int zero = 0;
short var_19 = (short)-15557;
short var_20 = (short)31869;
short var_21 = (short)-18845;
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
