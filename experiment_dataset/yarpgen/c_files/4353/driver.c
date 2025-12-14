#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3545336108U;
unsigned int var_1 = 2877371073U;
unsigned int var_2 = 568793365U;
unsigned int var_4 = 1356276490U;
signed char var_8 = (signed char)-41;
short var_11 = (short)4912;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-118;
signed char var_16 = (signed char)-29;
unsigned int var_17 = 1161178791U;
signed char var_18 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
