#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)146;
unsigned int var_5 = 3593834584U;
unsigned short var_6 = (unsigned short)41158;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)225;
unsigned short var_12 = (unsigned short)29553;
int zero = 0;
signed char var_13 = (signed char)102;
long long int var_14 = -6886026762091647014LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
