#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56322;
signed char var_12 = (signed char)-109;
long long int var_17 = -3836475554815085328LL;
unsigned int var_18 = 2680014843U;
int zero = 0;
unsigned short var_20 = (unsigned short)26281;
unsigned short var_21 = (unsigned short)5469;
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
