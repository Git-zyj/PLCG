#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)26;
signed char var_2 = (signed char)-78;
long long int var_3 = 4734431062060844206LL;
short var_4 = (short)-30518;
short var_5 = (short)30029;
unsigned long long int var_6 = 13344646179987790582ULL;
signed char var_9 = (signed char)-27;
unsigned long long int var_12 = 15369325482882084099ULL;
short var_13 = (short)-6489;
signed char var_14 = (signed char)122;
int zero = 0;
signed char var_19 = (signed char)-108;
long long int var_20 = -6305218616586500330LL;
unsigned int var_21 = 2301862678U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
