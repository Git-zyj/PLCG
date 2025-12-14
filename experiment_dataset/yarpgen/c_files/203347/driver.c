#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -453252908;
unsigned short var_2 = (unsigned short)414;
unsigned short var_4 = (unsigned short)2763;
unsigned long long int var_6 = 17768550448461074438ULL;
long long int var_7 = -3342069370281600046LL;
unsigned short var_8 = (unsigned short)39040;
int zero = 0;
unsigned int var_10 = 1585050502U;
int var_11 = 2098480915;
long long int var_12 = 5287316081953950025LL;
int var_13 = -100105053;
unsigned long long int var_14 = 4135644757962596830ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
