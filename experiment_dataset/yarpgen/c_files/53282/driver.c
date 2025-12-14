#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)146;
signed char var_4 = (signed char)63;
unsigned char var_5 = (unsigned char)208;
unsigned long long int var_6 = 14758218188962753068ULL;
_Bool var_8 = (_Bool)0;
long long int var_10 = 8664512255768650857LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_12 = -5772426841025931526LL;
long long int var_13 = -358783983938904227LL;
int var_14 = 170158752;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
