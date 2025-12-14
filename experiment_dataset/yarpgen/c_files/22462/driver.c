#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1835841674640286636ULL;
long long int var_4 = -8153425402955321015LL;
int var_6 = -2123649988;
signed char var_9 = (signed char)109;
long long int var_12 = -8516986574053036262LL;
unsigned short var_13 = (unsigned short)57683;
int zero = 0;
unsigned int var_14 = 1565895040U;
unsigned int var_15 = 1752552144U;
unsigned short var_16 = (unsigned short)15995;
unsigned long long int var_17 = 1516663232522433768ULL;
signed char var_18 = (signed char)45;
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
