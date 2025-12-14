#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)60;
short var_3 = (short)-11907;
short var_7 = (short)20803;
int zero = 0;
short var_12 = (short)14385;
unsigned char var_13 = (unsigned char)144;
signed char var_14 = (signed char)-115;
int var_15 = -985545282;
signed char var_16 = (signed char)27;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
