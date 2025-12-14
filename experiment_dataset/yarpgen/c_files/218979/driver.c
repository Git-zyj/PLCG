#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1438112141U;
unsigned int var_6 = 1117175798U;
long long int var_7 = 2113883843309948637LL;
unsigned int var_8 = 786038693U;
short var_9 = (short)8634;
long long int var_11 = 3378507898687692247LL;
int zero = 0;
signed char var_13 = (signed char)46;
unsigned int var_14 = 2573380076U;
unsigned int var_15 = 114499015U;
signed char var_16 = (signed char)127;
unsigned char var_17 = (unsigned char)82;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
