#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-94;
unsigned int var_4 = 3821891974U;
int var_5 = -2115655726;
signed char var_13 = (signed char)94;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-27158;
signed char var_16 = (signed char)66;
unsigned char var_17 = (unsigned char)68;
short var_18 = (short)-20942;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
