#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15692819807180778499ULL;
unsigned int var_3 = 3712056281U;
int var_4 = 532065601;
_Bool var_5 = (_Bool)0;
unsigned long long int var_9 = 1926193392593894653ULL;
_Bool var_10 = (_Bool)0;
int var_11 = 21466199;
long long int var_12 = 4729576758055835872LL;
int zero = 0;
unsigned int var_18 = 290698795U;
unsigned char var_19 = (unsigned char)151;
long long int var_20 = 9080480908220750057LL;
short var_21 = (short)-24114;
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
