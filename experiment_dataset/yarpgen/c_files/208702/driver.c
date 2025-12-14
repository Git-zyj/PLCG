#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36810;
unsigned short var_2 = (unsigned short)44149;
unsigned short var_9 = (unsigned short)63267;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_20 = 5280565647530079628LL;
int var_21 = 423044237;
signed char var_22 = (signed char)60;
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
