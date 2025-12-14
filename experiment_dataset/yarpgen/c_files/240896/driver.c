#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7090189857705490244LL;
int var_2 = 489890365;
short var_3 = (short)-1421;
int var_4 = -534817036;
long long int var_5 = 7849175580316302747LL;
signed char var_8 = (signed char)87;
int zero = 0;
int var_10 = 1084405395;
int var_11 = 915059471;
signed char var_12 = (signed char)-104;
int var_13 = 1724801094;
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
