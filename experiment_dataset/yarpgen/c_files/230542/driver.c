#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_4 = (short)-5429;
signed char var_6 = (signed char)118;
short var_10 = (short)-21396;
unsigned short var_15 = (unsigned short)34697;
int zero = 0;
long long int var_19 = -8954807734147556407LL;
int var_20 = -1968283997;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
