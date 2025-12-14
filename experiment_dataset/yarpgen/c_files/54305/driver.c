#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26276;
short var_4 = (short)9268;
int var_6 = 534868781;
short var_7 = (short)-30554;
long long int var_9 = -2581542976893729457LL;
signed char var_10 = (signed char)77;
int zero = 0;
unsigned int var_13 = 47874898U;
short var_14 = (short)-24035;
unsigned char var_15 = (unsigned char)221;
void init() {
}

void checksum() {
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
