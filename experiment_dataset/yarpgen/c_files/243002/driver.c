#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49843;
unsigned long long int var_5 = 15221566191242592966ULL;
unsigned short var_8 = (unsigned short)42022;
int zero = 0;
short var_10 = (short)20722;
unsigned short var_11 = (unsigned short)42357;
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
