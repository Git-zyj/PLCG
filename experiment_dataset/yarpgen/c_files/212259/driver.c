#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22119;
long long int var_2 = -3542585972495089328LL;
short var_4 = (short)-15063;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2048230292U;
int zero = 0;
short var_13 = (short)-18662;
unsigned short var_14 = (unsigned short)25889;
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
