#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned short var_6 = (unsigned short)16497;
unsigned int var_7 = 3291557223U;
unsigned long long int var_11 = 5668725559439101719ULL;
unsigned short var_13 = (unsigned short)3326;
int zero = 0;
unsigned char var_19 = (unsigned char)40;
unsigned short var_20 = (unsigned short)11346;
long long int var_21 = 2871872986497025674LL;
unsigned long long int var_22 = 10826164716788035821ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
