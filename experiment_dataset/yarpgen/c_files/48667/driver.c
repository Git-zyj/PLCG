#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)14038;
unsigned char var_6 = (unsigned char)215;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)12529;
int zero = 0;
unsigned int var_17 = 1628652608U;
long long int var_18 = -8036051624274632840LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
