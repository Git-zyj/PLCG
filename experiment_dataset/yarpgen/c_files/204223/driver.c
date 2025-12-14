#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9851;
unsigned short var_5 = (unsigned short)32270;
unsigned long long int var_6 = 16113057135829009970ULL;
unsigned short var_8 = (unsigned short)59030;
short var_9 = (short)18227;
short var_14 = (short)-28710;
long long int var_19 = 6646546345508745532LL;
int zero = 0;
short var_20 = (short)-25076;
long long int var_21 = 2766743822105136499LL;
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
