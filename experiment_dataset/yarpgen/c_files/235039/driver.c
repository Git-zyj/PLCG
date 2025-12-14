#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)63;
unsigned int var_4 = 2734604949U;
long long int var_5 = 4351981938085345548LL;
unsigned int var_6 = 3628652506U;
short var_10 = (short)-2232;
short var_11 = (short)25413;
signed char var_12 = (signed char)3;
signed char var_13 = (signed char)63;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-18041;
short var_22 = (short)-19973;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
