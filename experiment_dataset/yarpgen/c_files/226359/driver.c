#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1247599752U;
unsigned short var_3 = (unsigned short)42554;
unsigned int var_5 = 3230553026U;
short var_7 = (short)-19733;
long long int var_8 = 8547804753575190520LL;
long long int var_9 = 8287828349248191541LL;
int zero = 0;
int var_13 = 1583560023;
int var_14 = 2067594991;
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
