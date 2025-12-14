#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63065;
signed char var_4 = (signed char)-105;
unsigned char var_15 = (unsigned char)112;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 403619160U;
unsigned int var_19 = 3448271404U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
