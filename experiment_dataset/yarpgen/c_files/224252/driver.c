#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1992634502;
short var_1 = (short)12925;
signed char var_2 = (signed char)-105;
short var_3 = (short)15141;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 3573195268U;
long long int var_14 = -4178862466665432533LL;
signed char var_15 = (signed char)83;
int zero = 0;
short var_20 = (short)21127;
unsigned int var_21 = 1524347213U;
unsigned int var_22 = 3076467457U;
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
