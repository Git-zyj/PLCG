#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3748291420933270535LL;
unsigned short var_2 = (unsigned short)12960;
short var_4 = (short)23079;
short var_9 = (short)22950;
int var_11 = -1996149376;
unsigned short var_12 = (unsigned short)26003;
int zero = 0;
unsigned long long int var_14 = 12987030300103335874ULL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)42029;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
