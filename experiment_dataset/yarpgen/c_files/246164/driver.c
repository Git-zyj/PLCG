#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -632485193;
_Bool var_6 = (_Bool)1;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-23150;
int var_15 = -33577131;
int zero = 0;
short var_17 = (short)13061;
int var_18 = 665087414;
int var_19 = 357912048;
unsigned char var_20 = (unsigned char)114;
int var_21 = -55070914;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
