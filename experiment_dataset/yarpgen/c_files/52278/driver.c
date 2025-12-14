#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 229257432U;
long long int var_8 = -5971550806989704394LL;
unsigned short var_15 = (unsigned short)62576;
int zero = 0;
short var_16 = (short)385;
int var_17 = -1310533548;
signed char var_18 = (signed char)50;
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
