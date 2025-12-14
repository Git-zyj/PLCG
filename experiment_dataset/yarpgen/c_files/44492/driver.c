#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1786329408U;
long long int var_1 = -770071284481307671LL;
unsigned char var_4 = (unsigned char)92;
int var_5 = 875606979;
unsigned long long int var_6 = 5731566807380239084ULL;
signed char var_11 = (signed char)-110;
int zero = 0;
int var_12 = -884938388;
signed char var_13 = (signed char)-17;
unsigned long long int var_14 = 3964051465537167307ULL;
short var_15 = (short)-26453;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
