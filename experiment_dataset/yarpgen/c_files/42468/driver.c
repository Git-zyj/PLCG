#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1588284018U;
unsigned int var_9 = 1009083798U;
long long int var_10 = 4356599727114845823LL;
int zero = 0;
int var_14 = -532158970;
unsigned long long int var_15 = 2803875244036531565ULL;
unsigned int var_16 = 3045164119U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
