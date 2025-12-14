#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)58424;
_Bool var_10 = (_Bool)0;
unsigned char var_13 = (unsigned char)85;
short var_15 = (short)5914;
int zero = 0;
short var_19 = (short)28655;
unsigned short var_20 = (unsigned short)60162;
short var_21 = (short)-10018;
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
