#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)121;
int var_10 = -591623788;
int var_14 = -263641568;
signed char var_16 = (signed char)-6;
int zero = 0;
long long int var_18 = -281610607014707256LL;
long long int var_19 = 6349852695061469037LL;
signed char var_20 = (signed char)119;
_Bool var_21 = (_Bool)1;
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
