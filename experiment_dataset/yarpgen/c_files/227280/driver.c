#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1882038190;
unsigned short var_6 = (unsigned short)41265;
unsigned int var_7 = 2975802825U;
unsigned int var_11 = 207604385U;
int var_15 = 513456272;
int zero = 0;
short var_17 = (short)-9657;
unsigned short var_18 = (unsigned short)6922;
unsigned long long int var_19 = 2314491000384548023ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
