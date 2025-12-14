#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)14;
unsigned char var_4 = (unsigned char)177;
signed char var_6 = (signed char)-78;
unsigned int var_8 = 3489369557U;
int zero = 0;
short var_12 = (short)6896;
unsigned short var_13 = (unsigned short)21208;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)110;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
