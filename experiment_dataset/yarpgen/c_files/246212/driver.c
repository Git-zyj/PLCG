#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)107;
unsigned char var_8 = (unsigned char)174;
int var_9 = 123208272;
unsigned int var_12 = 768015652U;
unsigned short var_16 = (unsigned short)51947;
unsigned char var_17 = (unsigned char)183;
int zero = 0;
unsigned short var_18 = (unsigned short)39014;
signed char var_19 = (signed char)-18;
unsigned short var_20 = (unsigned short)25233;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
