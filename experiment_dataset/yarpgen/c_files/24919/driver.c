#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
unsigned int var_3 = 3341625635U;
short var_10 = (short)26605;
unsigned short var_13 = (unsigned short)25888;
long long int var_16 = -317222585937011526LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 5569736433037443992ULL;
int var_19 = -1673016988;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
