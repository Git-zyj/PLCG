#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)8;
short var_7 = (short)13066;
short var_13 = (short)6225;
unsigned long long int var_19 = 5264942877788127432ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 8452353473854309666LL;
void init() {
}

void checksum() {
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
