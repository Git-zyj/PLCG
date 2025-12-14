#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)65462;
short var_10 = (short)-27395;
int zero = 0;
signed char var_20 = (signed char)-99;
unsigned int var_21 = 1337211180U;
long long int var_22 = -8486499855661122973LL;
unsigned short var_23 = (unsigned short)20921;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
