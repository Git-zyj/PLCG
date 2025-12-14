#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
unsigned long long int var_2 = 8239009181661874682ULL;
signed char var_3 = (signed char)37;
unsigned short var_4 = (unsigned short)13931;
unsigned int var_6 = 3305573117U;
short var_8 = (short)9341;
signed char var_11 = (signed char)79;
int zero = 0;
long long int var_13 = 2196754797629429726LL;
unsigned short var_14 = (unsigned short)9294;
unsigned long long int var_15 = 9324541262411506576ULL;
signed char var_16 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
