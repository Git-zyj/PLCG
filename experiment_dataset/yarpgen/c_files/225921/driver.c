#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
long long int var_6 = -312660728822033402LL;
unsigned char var_7 = (unsigned char)39;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2260988843U;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)120;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -526004428;
unsigned int var_19 = 689869348U;
unsigned short var_20 = (unsigned short)24205;
unsigned char var_21 = (unsigned char)128;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
