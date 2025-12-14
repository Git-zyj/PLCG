#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
unsigned char var_1 = (unsigned char)174;
short var_2 = (short)21780;
signed char var_3 = (signed char)22;
unsigned char var_4 = (unsigned char)126;
short var_5 = (short)9121;
short var_6 = (short)-26550;
unsigned char var_7 = (unsigned char)163;
int zero = 0;
short var_11 = (short)28488;
signed char var_12 = (signed char)-99;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
