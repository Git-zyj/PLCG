#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 2102845581;
signed char var_16 = (signed char)106;
long long int var_17 = 4931037080234669935LL;
int zero = 0;
unsigned char var_18 = (unsigned char)225;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)22359;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
