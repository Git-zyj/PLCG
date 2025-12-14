#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3730059051U;
short var_4 = (short)8915;
unsigned short var_6 = (unsigned short)54247;
signed char var_11 = (signed char)59;
unsigned short var_13 = (unsigned short)26945;
long long int var_17 = 4701233857503727024LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -339194326;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
