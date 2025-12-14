#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 601739261U;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)29206;
unsigned long long int var_9 = 11459622773732269719ULL;
unsigned long long int var_10 = 16447854917956610362ULL;
unsigned int var_11 = 2457767623U;
unsigned int var_14 = 4212407575U;
unsigned char var_15 = (unsigned char)82;
int zero = 0;
unsigned long long int var_16 = 4775779323080502623ULL;
unsigned long long int var_17 = 4392982721892395042ULL;
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
