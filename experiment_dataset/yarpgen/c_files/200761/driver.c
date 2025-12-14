#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8668245228763963674LL;
_Bool var_7 = (_Bool)1;
long long int var_13 = 6779148766963654037LL;
signed char var_17 = (signed char)-84;
int zero = 0;
signed char var_19 = (signed char)82;
unsigned char var_20 = (unsigned char)213;
short var_21 = (short)14879;
void init() {
}

void checksum() {
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
