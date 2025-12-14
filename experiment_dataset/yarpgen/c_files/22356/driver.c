#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1149201715;
int var_8 = -1575075637;
int var_9 = -326074194;
unsigned char var_12 = (unsigned char)200;
int var_13 = -9787404;
int zero = 0;
long long int var_16 = 569139806935436843LL;
_Bool var_17 = (_Bool)1;
int var_18 = 1048533107;
unsigned long long int var_19 = 12308425289571745113ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
