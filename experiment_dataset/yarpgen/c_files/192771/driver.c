#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)364;
int var_6 = -813975550;
unsigned int var_16 = 2661562192U;
int zero = 0;
unsigned char var_20 = (unsigned char)13;
unsigned int var_21 = 1717534610U;
short var_22 = (short)-26604;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
