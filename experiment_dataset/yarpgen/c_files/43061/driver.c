#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3701;
long long int var_11 = -5787916910469509394LL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 770840169U;
int zero = 0;
unsigned char var_17 = (unsigned char)181;
int var_18 = 1620826387;
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
