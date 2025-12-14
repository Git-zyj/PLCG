#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1726326989;
unsigned short var_2 = (unsigned short)34153;
signed char var_3 = (signed char)-57;
int var_5 = -86350461;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)116;
long long int var_10 = -8245498103930708037LL;
int zero = 0;
short var_12 = (short)-3497;
short var_13 = (short)-4053;
signed char var_14 = (signed char)21;
short var_15 = (short)12422;
long long int var_16 = -4080670277419013858LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
