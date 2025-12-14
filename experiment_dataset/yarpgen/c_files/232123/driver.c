#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1270137704U;
unsigned int var_3 = 1752803441U;
unsigned char var_7 = (unsigned char)154;
unsigned long long int var_8 = 7796439934374286704ULL;
int zero = 0;
long long int var_15 = 3911447385644796545LL;
signed char var_16 = (signed char)-26;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
