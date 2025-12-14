#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_7 = (unsigned char)151;
unsigned long long int var_9 = 3841525177133081466ULL;
unsigned char var_17 = (unsigned char)29;
int zero = 0;
unsigned long long int var_20 = 5711065686382271664ULL;
int var_21 = -1171937271;
unsigned long long int var_22 = 14047741621369708020ULL;
unsigned char var_23 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
