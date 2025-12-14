#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8075;
int var_3 = -832547438;
unsigned char var_6 = (unsigned char)159;
short var_10 = (short)29976;
unsigned int var_11 = 514183619U;
unsigned long long int var_12 = 16732404557404862251ULL;
long long int var_13 = 7989110153914601934LL;
int zero = 0;
unsigned char var_15 = (unsigned char)221;
long long int var_16 = -8843117606629020024LL;
signed char var_17 = (signed char)-29;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
