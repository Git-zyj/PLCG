#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2763750072U;
signed char var_2 = (signed char)125;
unsigned short var_4 = (unsigned short)30891;
short var_5 = (short)9938;
signed char var_6 = (signed char)37;
signed char var_7 = (signed char)-77;
_Bool var_8 = (_Bool)0;
short var_12 = (short)21728;
int zero = 0;
unsigned int var_13 = 2954970190U;
unsigned long long int var_14 = 16610315114232445476ULL;
unsigned long long int var_15 = 14062527368706101488ULL;
unsigned char var_16 = (unsigned char)242;
void init() {
}

void checksum() {
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
