#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-22613;
unsigned short var_2 = (unsigned short)34814;
long long int var_3 = -6149989049977228241LL;
unsigned short var_4 = (unsigned short)49246;
signed char var_6 = (signed char)-93;
int zero = 0;
short var_10 = (short)14360;
long long int var_11 = 3249560719460349491LL;
unsigned long long int var_12 = 748807005177833841ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
