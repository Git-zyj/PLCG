#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = 1636064344;
short var_5 = (short)20001;
short var_9 = (short)16253;
unsigned long long int var_10 = 9368340922758381115ULL;
int zero = 0;
short var_17 = (short)-12422;
long long int var_18 = -6789591950633218213LL;
signed char var_19 = (signed char)-114;
signed char var_20 = (signed char)-89;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
