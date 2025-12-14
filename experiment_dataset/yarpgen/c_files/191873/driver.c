#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41369;
unsigned short var_2 = (unsigned short)45845;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)21;
_Bool var_10 = (_Bool)0;
unsigned short var_16 = (unsigned short)65151;
int zero = 0;
unsigned int var_17 = 421899204U;
signed char var_18 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
