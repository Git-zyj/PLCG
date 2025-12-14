#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
long long int var_1 = -7672558865401154151LL;
int var_4 = -883303842;
signed char var_7 = (signed char)-61;
int var_8 = 1702585414;
long long int var_16 = -3651573242072188434LL;
int zero = 0;
signed char var_17 = (signed char)9;
int var_18 = -864771241;
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
