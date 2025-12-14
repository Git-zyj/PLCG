#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5954901197573842533LL;
_Bool var_2 = (_Bool)0;
short var_8 = (short)5856;
unsigned char var_12 = (unsigned char)21;
int zero = 0;
signed char var_17 = (signed char)-17;
unsigned int var_18 = 1169314673U;
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
