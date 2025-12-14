#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1404531297U;
unsigned int var_4 = 2891747106U;
unsigned long long int var_6 = 5744139634457924879ULL;
unsigned long long int var_8 = 15716351609693458436ULL;
long long int var_14 = -5747316871700085785LL;
int zero = 0;
signed char var_15 = (signed char)-103;
unsigned short var_16 = (unsigned short)5036;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
