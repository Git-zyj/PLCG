#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24337;
signed char var_4 = (signed char)-68;
unsigned int var_6 = 469722750U;
int var_8 = -1412576553;
long long int var_10 = -469310707275841122LL;
int zero = 0;
unsigned long long int var_12 = 8068180073280966834ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
