#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -456868698;
_Bool var_9 = (_Bool)0;
long long int var_15 = 6930033114521924457LL;
int zero = 0;
unsigned short var_16 = (unsigned short)58521;
unsigned char var_17 = (unsigned char)64;
void init() {
}

void checksum() {
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
