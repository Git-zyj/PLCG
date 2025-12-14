#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_5 = 3483476804U;
long long int var_7 = 7005936444373567916LL;
unsigned short var_8 = (unsigned short)60606;
unsigned short var_9 = (unsigned short)65429;
long long int var_12 = -6595677775115875333LL;
int zero = 0;
signed char var_17 = (signed char)-75;
unsigned short var_18 = (unsigned short)43908;
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
