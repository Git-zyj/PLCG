#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1301934747U;
unsigned int var_5 = 3881150823U;
unsigned int var_6 = 4207624529U;
long long int var_7 = 1368375142959036889LL;
short var_8 = (short)9312;
long long int var_9 = -3779914656760467651LL;
signed char var_13 = (signed char)-53;
int var_16 = -420563584;
int zero = 0;
short var_18 = (short)25602;
unsigned int var_19 = 3213383597U;
unsigned int var_20 = 3218604644U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
