#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9047215354623994676ULL;
signed char var_3 = (signed char)-93;
short var_6 = (short)25690;
long long int var_11 = -3416657497396883312LL;
unsigned char var_12 = (unsigned char)104;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)39923;
unsigned int var_17 = 1729533207U;
void init() {
}

void checksum() {
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
