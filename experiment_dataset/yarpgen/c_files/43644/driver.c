#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51210;
unsigned int var_5 = 1257725798U;
signed char var_7 = (signed char)-48;
unsigned long long int var_8 = 8300678806084274741ULL;
signed char var_10 = (signed char)(-127 - 1);
int zero = 0;
long long int var_11 = -2034815728125391943LL;
long long int var_12 = -8759001541620886877LL;
long long int var_13 = -3053466580813537417LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
