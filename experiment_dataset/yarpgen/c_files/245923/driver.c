#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
unsigned int var_1 = 79308168U;
int var_8 = 1918429082;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)48;
unsigned int var_11 = 1693111192U;
long long int var_14 = -2508383865398030989LL;
unsigned char var_15 = (unsigned char)29;
unsigned char var_19 = (unsigned char)13;
int zero = 0;
short var_20 = (short)12163;
unsigned char var_21 = (unsigned char)45;
unsigned char var_22 = (unsigned char)247;
signed char var_23 = (signed char)15;
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
