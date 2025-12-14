#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18024405172746284946ULL;
_Bool var_5 = (_Bool)0;
short var_9 = (short)22058;
unsigned int var_12 = 551724145U;
unsigned long long int var_14 = 10469797524977700431ULL;
int zero = 0;
long long int var_15 = -8304912720414575852LL;
short var_16 = (short)-18376;
signed char var_17 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
