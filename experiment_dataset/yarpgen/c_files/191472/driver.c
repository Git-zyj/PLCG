#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)79;
unsigned long long int var_1 = 1927554726672644570ULL;
long long int var_2 = 8946734689533220349LL;
unsigned int var_4 = 3668808896U;
_Bool var_9 = (_Bool)1;
int var_11 = 408042791;
int zero = 0;
long long int var_13 = -3226877467707092294LL;
long long int var_14 = -683829604133831591LL;
_Bool var_15 = (_Bool)0;
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
