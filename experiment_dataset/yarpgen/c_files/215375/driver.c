#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-123;
unsigned short var_1 = (unsigned short)14784;
unsigned short var_2 = (unsigned short)54219;
int var_7 = -986254383;
unsigned short var_9 = (unsigned short)43249;
unsigned short var_12 = (unsigned short)1653;
signed char var_15 = (signed char)-45;
int zero = 0;
unsigned int var_16 = 3140836135U;
signed char var_17 = (signed char)-92;
unsigned long long int var_18 = 14467432898850391053ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
