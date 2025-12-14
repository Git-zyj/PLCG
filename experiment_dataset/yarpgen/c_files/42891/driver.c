#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
_Bool var_9 = (_Bool)1;
signed char var_13 = (signed char)19;
long long int var_14 = -1067326432821679966LL;
unsigned long long int var_18 = 4323257012739894555ULL;
int var_19 = 1133270605;
int zero = 0;
unsigned short var_20 = (unsigned short)50386;
unsigned short var_21 = (unsigned short)36921;
unsigned short var_22 = (unsigned short)16106;
void init() {
}

void checksum() {
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
