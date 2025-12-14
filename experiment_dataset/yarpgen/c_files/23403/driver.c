#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 23482769U;
unsigned short var_3 = (unsigned short)36096;
int var_5 = -773396513;
unsigned long long int var_9 = 4442707635837305287ULL;
unsigned char var_10 = (unsigned char)245;
int zero = 0;
signed char var_12 = (signed char)26;
signed char var_13 = (signed char)97;
_Bool var_14 = (_Bool)0;
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
