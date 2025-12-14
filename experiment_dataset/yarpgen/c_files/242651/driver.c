#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)95;
signed char var_3 = (signed char)20;
unsigned short var_4 = (unsigned short)25667;
short var_7 = (short)7759;
short var_8 = (short)10798;
unsigned long long int var_9 = 1674814488507703609ULL;
int zero = 0;
unsigned long long int var_10 = 9158907598917505645ULL;
int var_11 = 879800353;
signed char var_12 = (signed char)59;
unsigned long long int var_13 = 9779067754780044264ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
