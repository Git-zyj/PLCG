#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 776396199;
unsigned long long int var_3 = 6229840530599263144ULL;
unsigned char var_6 = (unsigned char)111;
unsigned long long int var_7 = 11281141066127958182ULL;
unsigned int var_8 = 2749893916U;
_Bool var_9 = (_Bool)0;
long long int var_10 = 2444020931896424991LL;
unsigned long long int var_12 = 5699011771992507828ULL;
_Bool var_13 = (_Bool)0;
long long int var_14 = 7744323367958644377LL;
int zero = 0;
int var_15 = 1458967649;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)244;
unsigned long long int var_18 = 17574378998723817627ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
