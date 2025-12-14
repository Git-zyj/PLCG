#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 83327881;
long long int var_5 = -8340620375554877537LL;
unsigned char var_9 = (unsigned char)145;
unsigned long long int var_11 = 7101680574119694178ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)195;
_Bool var_18 = (_Bool)0;
long long int var_19 = -361528553362352437LL;
unsigned int var_20 = 2895928358U;
long long int var_21 = 1465625284138343580LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
