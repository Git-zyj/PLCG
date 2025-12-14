#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)74;
long long int var_5 = -3364742065443099765LL;
unsigned char var_7 = (unsigned char)110;
unsigned int var_9 = 2823882504U;
unsigned int var_11 = 1960834461U;
signed char var_12 = (signed char)2;
unsigned long long int var_13 = 15280902815632009065ULL;
_Bool var_14 = (_Bool)0;
int var_16 = -784487411;
int zero = 0;
unsigned long long int var_18 = 1663193961148580648ULL;
int var_19 = -990930713;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
