#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4120642469U;
long long int var_7 = 2316200488373216888LL;
signed char var_9 = (signed char)68;
signed char var_10 = (signed char)108;
signed char var_14 = (signed char)-41;
unsigned long long int var_16 = 3007091430495396547ULL;
int zero = 0;
int var_18 = 233532207;
int var_19 = 392312188;
signed char var_20 = (signed char)98;
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
