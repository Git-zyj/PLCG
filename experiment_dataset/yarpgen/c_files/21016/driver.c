#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15680039850280655673ULL;
unsigned short var_5 = (unsigned short)4858;
int var_7 = 55160454;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)44148;
int zero = 0;
unsigned int var_10 = 2862516730U;
unsigned short var_11 = (unsigned short)59347;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
