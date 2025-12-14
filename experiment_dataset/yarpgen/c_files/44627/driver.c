#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30695;
unsigned char var_2 = (unsigned char)39;
unsigned int var_3 = 1648179944U;
long long int var_4 = -1648952409794839323LL;
long long int var_5 = 5390061204263516337LL;
signed char var_7 = (signed char)6;
int zero = 0;
unsigned int var_10 = 1106268828U;
short var_11 = (short)10694;
short var_12 = (short)-18023;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
