#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-23;
signed char var_5 = (signed char)-11;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)70;
short var_9 = (short)19709;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)80;
unsigned short var_14 = (unsigned short)5073;
unsigned int var_16 = 1534369551U;
int zero = 0;
unsigned short var_18 = (unsigned short)24056;
int var_19 = 103112558;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
