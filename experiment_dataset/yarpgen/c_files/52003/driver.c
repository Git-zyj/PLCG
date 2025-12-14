#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_8 = 3376873032494551572LL;
long long int var_9 = 6764684857567854500LL;
_Bool var_10 = (_Bool)0;
unsigned char var_14 = (unsigned char)154;
unsigned short var_16 = (unsigned short)15703;
unsigned char var_19 = (unsigned char)138;
int zero = 0;
unsigned int var_20 = 115198738U;
unsigned short var_21 = (unsigned short)64583;
unsigned long long int var_22 = 3866295072738871024ULL;
unsigned short var_23 = (unsigned short)18430;
unsigned char var_24 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
