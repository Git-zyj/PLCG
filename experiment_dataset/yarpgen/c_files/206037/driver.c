#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)230;
int var_2 = -801629708;
signed char var_3 = (signed char)28;
unsigned int var_5 = 3720458720U;
int var_6 = -2087269667;
int var_8 = 1832828953;
int var_9 = -149868715;
int zero = 0;
signed char var_10 = (signed char)-42;
signed char var_11 = (signed char)28;
long long int var_12 = 1661765347365173313LL;
signed char var_13 = (signed char)-39;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
