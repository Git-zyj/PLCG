#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)27957;
short var_4 = (short)-886;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 10499894158163081885ULL;
signed char var_9 = (signed char)-76;
short var_13 = (short)6996;
int var_14 = 484607181;
int zero = 0;
unsigned char var_15 = (unsigned char)39;
long long int var_16 = 6165663793396255764LL;
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
