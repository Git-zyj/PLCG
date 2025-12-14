#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)15664;
unsigned short var_13 = (unsigned short)51933;
short var_14 = (short)22940;
unsigned int var_17 = 1261168157U;
int zero = 0;
short var_20 = (short)1951;
short var_21 = (short)-18658;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
