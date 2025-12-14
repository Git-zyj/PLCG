#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)43;
int var_2 = -1474868964;
int var_3 = 738311616;
short var_9 = (short)7133;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 15052726315237206330ULL;
long long int var_18 = -8126489933862522526LL;
signed char var_19 = (signed char)10;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
