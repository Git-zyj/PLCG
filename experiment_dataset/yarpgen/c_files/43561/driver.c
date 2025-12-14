#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)14;
unsigned long long int var_3 = 7102113940488167325ULL;
unsigned int var_4 = 1531238648U;
int var_5 = 1543188333;
signed char var_6 = (signed char)-34;
int var_7 = -108706221;
signed char var_8 = (signed char)-54;
int zero = 0;
unsigned int var_10 = 3488035840U;
signed char var_11 = (signed char)-65;
long long int var_12 = -3892988660341750135LL;
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
