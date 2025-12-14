#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-50;
signed char var_6 = (signed char)-34;
short var_9 = (short)1330;
unsigned long long int var_10 = 13986094333463281967ULL;
short var_15 = (short)-9267;
int zero = 0;
long long int var_20 = -316244789951952927LL;
unsigned int var_21 = 952823343U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
