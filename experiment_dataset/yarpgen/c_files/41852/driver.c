#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1756698516U;
unsigned long long int var_6 = 75651710850974693ULL;
unsigned short var_7 = (unsigned short)47874;
int zero = 0;
unsigned short var_14 = (unsigned short)27473;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1132723317U;
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
