#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)-3;
signed char var_6 = (signed char)-77;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)47573;
int var_11 = 974549122;
int zero = 0;
signed char var_15 = (signed char)127;
int var_16 = 464105484;
void init() {
}

void checksum() {
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
