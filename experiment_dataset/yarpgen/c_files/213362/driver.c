#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
int var_1 = -1716434887;
unsigned short var_4 = (unsigned short)51867;
unsigned int var_11 = 282480646U;
signed char var_16 = (signed char)39;
int zero = 0;
int var_17 = 1230005959;
short var_18 = (short)1354;
unsigned int var_19 = 3923817788U;
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
