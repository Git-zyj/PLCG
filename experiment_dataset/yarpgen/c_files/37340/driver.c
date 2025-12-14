#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)20051;
unsigned char var_6 = (unsigned char)30;
int var_9 = 1422962539;
long long int var_11 = -4136347015820439276LL;
int zero = 0;
unsigned int var_12 = 2221896300U;
unsigned long long int var_13 = 5356799103886698150ULL;
signed char var_14 = (signed char)-102;
void init() {
}

void checksum() {
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
