#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16148244926156583772ULL;
unsigned int var_1 = 498209813U;
signed char var_3 = (signed char)37;
signed char var_4 = (signed char)-102;
unsigned int var_5 = 351656832U;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)8088;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 9045405994787734445ULL;
signed char var_16 = (signed char)-25;
void init() {
}

void checksum() {
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
