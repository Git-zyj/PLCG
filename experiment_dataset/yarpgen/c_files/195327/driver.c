#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_12 = (unsigned short)38003;
short var_13 = (short)7771;
signed char var_14 = (signed char)25;
unsigned char var_18 = (unsigned char)20;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-48;
long long int var_21 = -662875366991489704LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
