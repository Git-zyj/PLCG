#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2061401711U;
unsigned char var_3 = (unsigned char)127;
int var_4 = 1503882900;
int var_7 = -1602690694;
long long int var_8 = -6834872369880964447LL;
unsigned char var_10 = (unsigned char)200;
int var_12 = 1936493336;
signed char var_17 = (signed char)51;
int zero = 0;
unsigned int var_19 = 4177368181U;
unsigned char var_20 = (unsigned char)143;
signed char var_21 = (signed char)-12;
long long int var_22 = 5041348604979055269LL;
long long int var_23 = -777812276130839569LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
