#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)96;
unsigned int var_4 = 900005811U;
int var_8 = -1002639474;
signed char var_9 = (signed char)104;
unsigned int var_13 = 116690316U;
unsigned long long int var_15 = 16997201683623243544ULL;
unsigned char var_16 = (unsigned char)206;
int zero = 0;
unsigned char var_19 = (unsigned char)173;
short var_20 = (short)4158;
unsigned char var_21 = (unsigned char)118;
int var_22 = 819978704;
_Bool var_23 = (_Bool)1;
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
