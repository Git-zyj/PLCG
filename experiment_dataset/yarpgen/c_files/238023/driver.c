#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_9 = 16812161637588643133ULL;
long long int var_10 = 7896195218679199104LL;
unsigned char var_11 = (unsigned char)159;
int zero = 0;
unsigned int var_14 = 3142327945U;
short var_15 = (short)21837;
unsigned char var_16 = (unsigned char)253;
unsigned short var_17 = (unsigned short)28982;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
