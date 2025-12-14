#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -834968902330357042LL;
short var_9 = (short)-4246;
long long int var_10 = 1438115092903368351LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 4271096647732755095ULL;
signed char var_16 = (signed char)3;
unsigned char var_17 = (unsigned char)238;
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
