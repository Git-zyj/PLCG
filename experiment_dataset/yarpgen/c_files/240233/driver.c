#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 1448956569560820869LL;
unsigned short var_10 = (unsigned short)502;
int zero = 0;
signed char var_16 = (signed char)-46;
_Bool var_17 = (_Bool)1;
long long int var_18 = -3603473917447812745LL;
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
