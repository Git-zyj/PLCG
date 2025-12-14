#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_6 = 3387455634U;
unsigned short var_8 = (unsigned short)13499;
int var_13 = -1679571261;
int zero = 0;
signed char var_15 = (signed char)-91;
signed char var_16 = (signed char)-79;
unsigned int var_17 = 524377511U;
long long int var_18 = -2135823292106496051LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
