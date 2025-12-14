#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 384952075U;
unsigned char var_4 = (unsigned char)79;
int var_8 = -1205429153;
unsigned int var_11 = 640391739U;
unsigned int var_13 = 2168205702U;
int zero = 0;
short var_16 = (short)15308;
_Bool var_17 = (_Bool)1;
int var_18 = 1146305067;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
