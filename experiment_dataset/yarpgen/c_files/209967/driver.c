#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)3;
unsigned short var_3 = (unsigned short)58978;
signed char var_6 = (signed char)(-127 - 1);
unsigned int var_8 = 2546037984U;
long long int var_9 = 6510355450900221137LL;
int zero = 0;
unsigned int var_10 = 511074367U;
unsigned int var_11 = 94486975U;
long long int var_12 = -737705572600317328LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
