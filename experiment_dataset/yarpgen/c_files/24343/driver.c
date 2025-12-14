#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19419;
unsigned short var_3 = (unsigned short)16887;
unsigned short var_9 = (unsigned short)41012;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)48572;
int var_13 = -8951437;
short var_14 = (short)-6869;
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
