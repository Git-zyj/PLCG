#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-31573;
short var_6 = (short)25206;
unsigned int var_7 = 3608074688U;
signed char var_9 = (signed char)-74;
int zero = 0;
short var_10 = (short)28395;
long long int var_11 = -7890509780104877317LL;
unsigned int var_12 = 1011236230U;
signed char var_13 = (signed char)14;
unsigned long long int var_14 = 7391954731421176814ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
