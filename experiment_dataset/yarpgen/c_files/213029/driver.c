#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16391;
unsigned short var_1 = (unsigned short)57279;
signed char var_12 = (signed char)-124;
signed char var_14 = (signed char)104;
unsigned short var_16 = (unsigned short)44578;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)38;
signed char var_21 = (signed char)-37;
unsigned short var_22 = (unsigned short)31134;
unsigned int var_23 = 3268092041U;
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
