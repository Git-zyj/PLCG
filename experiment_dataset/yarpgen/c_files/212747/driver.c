#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12483414832626386978ULL;
unsigned int var_2 = 1549195555U;
_Bool var_5 = (_Bool)0;
long long int var_9 = 3235972676275084211LL;
unsigned char var_13 = (unsigned char)164;
int zero = 0;
unsigned long long int var_14 = 3272361814043159524ULL;
short var_15 = (short)-11923;
void init() {
}

void checksum() {
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
