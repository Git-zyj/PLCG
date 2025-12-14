#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10252535593776649042ULL;
signed char var_4 = (signed char)-97;
unsigned int var_5 = 67752953U;
signed char var_7 = (signed char)125;
unsigned long long int var_10 = 17734196370930151428ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)29217;
_Bool var_14 = (_Bool)1;
long long int var_15 = -3845135903479254141LL;
signed char var_16 = (signed char)52;
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
