#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-17;
unsigned int var_3 = 6357181U;
unsigned char var_8 = (unsigned char)136;
unsigned int var_12 = 3553249649U;
signed char var_14 = (signed char)84;
int zero = 0;
long long int var_20 = 6390826888940346767LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 986225577U;
int var_23 = -90273955;
void init() {
}

void checksum() {
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
