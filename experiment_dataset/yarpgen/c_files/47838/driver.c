#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53534;
long long int var_3 = -8764077479166785626LL;
unsigned char var_6 = (unsigned char)4;
unsigned int var_7 = 2180781673U;
int zero = 0;
signed char var_10 = (signed char)110;
signed char var_11 = (signed char)21;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
