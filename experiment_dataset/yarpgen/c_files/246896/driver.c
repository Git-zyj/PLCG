#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -577193735762361420LL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)34119;
int zero = 0;
short var_15 = (short)7347;
int var_16 = 785391373;
unsigned long long int var_17 = 6932091120313699931ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
