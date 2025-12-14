#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2851807478522131113ULL;
long long int var_5 = 4147507628185113714LL;
unsigned short var_8 = (unsigned short)44973;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)7940;
void init() {
}

void checksum() {
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
