#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-68;
long long int var_12 = -8250828648840797037LL;
unsigned long long int var_14 = 10034969967076986757ULL;
int zero = 0;
int var_16 = -252610915;
short var_17 = (short)28829;
unsigned int var_18 = 458068721U;
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
