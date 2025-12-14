#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
unsigned int var_1 = 4293894636U;
long long int var_3 = -6501275849398686801LL;
unsigned long long int var_4 = 6163182780461219231ULL;
long long int var_6 = 2466555801674580841LL;
unsigned int var_8 = 3808763173U;
unsigned short var_10 = (unsigned short)37662;
unsigned long long int var_11 = 15216920674337909773ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 6764099754165444480ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
