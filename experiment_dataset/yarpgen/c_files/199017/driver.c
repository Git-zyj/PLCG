#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 5555790511662321647ULL;
unsigned char var_14 = (unsigned char)147;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = -3935409467903155654LL;
int var_18 = 1946828774;
unsigned short var_19 = (unsigned short)4831;
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
