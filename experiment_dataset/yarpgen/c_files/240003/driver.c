#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6116372229106441222LL;
unsigned short var_4 = (unsigned short)49158;
unsigned long long int var_6 = 17770683001911386590ULL;
long long int var_7 = 82533896097440870LL;
long long int var_8 = 8723729209268549496LL;
unsigned long long int var_9 = 16392828776303059944ULL;
unsigned short var_10 = (unsigned short)7638;
unsigned long long int var_12 = 6658633974175038022ULL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)47213;
signed char var_15 = (signed char)57;
int zero = 0;
short var_16 = (short)-337;
signed char var_17 = (signed char)77;
long long int var_18 = 6870685675486875537LL;
void init() {
}

void checksum() {
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
