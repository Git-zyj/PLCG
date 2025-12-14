#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12148;
unsigned char var_3 = (unsigned char)193;
signed char var_4 = (signed char)108;
short var_7 = (short)21830;
_Bool var_8 = (_Bool)0;
signed char var_12 = (signed char)-26;
int zero = 0;
signed char var_13 = (signed char)69;
unsigned char var_14 = (unsigned char)251;
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
