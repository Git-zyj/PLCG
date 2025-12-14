#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5458119374155286984ULL;
unsigned short var_2 = (unsigned short)49843;
short var_3 = (short)23901;
unsigned long long int var_4 = 606396151996134900ULL;
signed char var_6 = (signed char)-24;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_11 = 6202456206091028440LL;
short var_12 = (short)-17314;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 13601423223830811674ULL;
void init() {
}

void checksum() {
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
