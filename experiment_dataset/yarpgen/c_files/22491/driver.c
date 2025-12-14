#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-38;
long long int var_2 = -1736673243357404070LL;
_Bool var_6 = (_Bool)0;
unsigned int var_10 = 2756870314U;
int zero = 0;
unsigned short var_12 = (unsigned short)5453;
unsigned char var_13 = (unsigned char)176;
unsigned char var_14 = (unsigned char)217;
unsigned long long int var_15 = 7939948601001241973ULL;
unsigned char var_16 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
