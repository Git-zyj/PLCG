#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -881912270755604615LL;
int var_1 = 1426730929;
unsigned short var_2 = (unsigned short)34187;
_Bool var_3 = (_Bool)1;
unsigned char var_7 = (unsigned char)110;
unsigned short var_12 = (unsigned short)46410;
unsigned int var_17 = 2286338U;
unsigned short var_19 = (unsigned short)40532;
int zero = 0;
unsigned char var_20 = (unsigned char)83;
unsigned char var_21 = (unsigned char)186;
void init() {
}

void checksum() {
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
