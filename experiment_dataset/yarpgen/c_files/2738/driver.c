#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 14999608913001846178ULL;
unsigned int var_17 = 1290349612U;
int zero = 0;
signed char var_19 = (signed char)105;
unsigned int var_20 = 296125335U;
unsigned long long int var_21 = 7053896249629537304ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
