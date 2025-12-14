#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)14148;
unsigned int var_9 = 3284442126U;
int var_12 = 628104034;
int var_13 = -1237171409;
unsigned int var_16 = 98205326U;
int zero = 0;
signed char var_17 = (signed char)53;
int var_18 = -1600754348;
void init() {
}

void checksum() {
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
