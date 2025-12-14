#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)36;
short var_2 = (short)28026;
signed char var_5 = (signed char)-69;
unsigned int var_6 = 2057415383U;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)36;
int zero = 0;
unsigned char var_13 = (unsigned char)237;
long long int var_14 = 5069583518127511942LL;
long long int var_15 = -2492292788456105027LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
