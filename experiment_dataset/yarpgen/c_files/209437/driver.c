#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1013914378U;
unsigned int var_3 = 2824336465U;
unsigned char var_5 = (unsigned char)47;
short var_9 = (short)1495;
signed char var_14 = (signed char)52;
unsigned int var_15 = 702700554U;
int zero = 0;
long long int var_18 = -5685009703582017236LL;
unsigned int var_19 = 2875393811U;
int var_20 = 1326690291;
int var_21 = -1437820089;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
