#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2107056428;
unsigned short var_4 = (unsigned short)7044;
_Bool var_5 = (_Bool)0;
signed char var_11 = (signed char)-65;
int zero = 0;
short var_12 = (short)-24431;
int var_13 = 701818270;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
