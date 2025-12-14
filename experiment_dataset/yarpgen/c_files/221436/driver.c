#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1268874130U;
unsigned int var_3 = 3948133449U;
unsigned short var_17 = (unsigned short)13245;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-110;
unsigned int var_21 = 1024105052U;
void init() {
}

void checksum() {
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
