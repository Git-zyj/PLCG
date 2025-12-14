#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24655;
unsigned char var_3 = (unsigned char)77;
short var_8 = (short)-18504;
short var_11 = (short)-19578;
_Bool var_12 = (_Bool)1;
long long int var_13 = 4034903670516878568LL;
int zero = 0;
long long int var_15 = 2226104340226819498LL;
long long int var_16 = 5187735044682004374LL;
_Bool var_17 = (_Bool)0;
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
