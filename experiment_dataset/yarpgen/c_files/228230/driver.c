#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_14 = -74508315;
unsigned char var_16 = (unsigned char)176;
unsigned char var_17 = (unsigned char)133;
unsigned short var_19 = (unsigned short)37335;
int zero = 0;
long long int var_20 = 2874982175785704738LL;
unsigned long long int var_21 = 5801453049230358515ULL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 7644206442154082794ULL;
void init() {
}

void checksum() {
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
