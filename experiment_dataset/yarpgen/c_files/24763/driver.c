#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)213;
unsigned int var_2 = 877624713U;
short var_3 = (short)-24151;
_Bool var_4 = (_Bool)1;
signed char var_9 = (signed char)43;
int zero = 0;
short var_13 = (short)8990;
unsigned short var_14 = (unsigned short)18591;
void init() {
}

void checksum() {
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
