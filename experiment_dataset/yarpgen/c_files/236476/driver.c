#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -192240012;
_Bool var_1 = (_Bool)1;
long long int var_2 = -4263053149662405909LL;
short var_3 = (short)-1117;
short var_4 = (short)25997;
long long int var_5 = 2473723582366072286LL;
unsigned short var_8 = (unsigned short)42585;
short var_9 = (short)91;
int zero = 0;
signed char var_10 = (signed char)34;
unsigned int var_11 = 1028573166U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
