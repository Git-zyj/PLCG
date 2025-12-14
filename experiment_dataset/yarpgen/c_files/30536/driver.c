#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)102;
long long int var_9 = 6583554642914677774LL;
unsigned char var_14 = (unsigned char)215;
short var_17 = (short)31046;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 5523535070366390259LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
