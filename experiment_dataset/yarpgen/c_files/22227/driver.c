#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)136;
unsigned int var_4 = 89212699U;
long long int var_9 = -8380164830510471705LL;
long long int var_10 = -5690535789029350767LL;
unsigned long long int var_11 = 15731491931967974537ULL;
signed char var_14 = (signed char)107;
unsigned int var_16 = 2190720515U;
unsigned short var_17 = (unsigned short)50939;
int zero = 0;
unsigned short var_19 = (unsigned short)10679;
unsigned short var_20 = (unsigned short)16115;
signed char var_21 = (signed char)47;
signed char var_22 = (signed char)85;
long long int var_23 = -9172514474922355802LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
