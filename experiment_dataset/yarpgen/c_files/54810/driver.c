#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27134;
int var_3 = -1358617638;
short var_6 = (short)-54;
signed char var_12 = (signed char)18;
unsigned char var_17 = (unsigned char)91;
int zero = 0;
short var_19 = (short)5245;
unsigned char var_20 = (unsigned char)99;
_Bool var_21 = (_Bool)0;
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
