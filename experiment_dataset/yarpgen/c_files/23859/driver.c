#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13401;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 698774895U;
unsigned int var_3 = 2319012346U;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)31;
unsigned int var_7 = 1294469930U;
int var_9 = -1706772013;
int zero = 0;
unsigned int var_11 = 3521635728U;
unsigned int var_12 = 2078498480U;
signed char var_13 = (signed char)-43;
short var_14 = (short)-13701;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
