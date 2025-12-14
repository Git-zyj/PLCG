#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-80;
unsigned char var_9 = (unsigned char)52;
short var_10 = (short)-4599;
unsigned int var_13 = 3587268466U;
int var_19 = -1360939002;
int zero = 0;
unsigned long long int var_20 = 2679390283197227469ULL;
unsigned char var_21 = (unsigned char)39;
_Bool var_22 = (_Bool)1;
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
