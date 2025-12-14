#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -489782877;
short var_1 = (short)-10575;
unsigned int var_4 = 3868272505U;
unsigned short var_7 = (unsigned short)47620;
signed char var_8 = (signed char)30;
unsigned short var_9 = (unsigned short)22143;
int zero = 0;
int var_12 = -290035236;
short var_13 = (short)-11774;
int var_14 = -448733810;
void init() {
}

void checksum() {
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
