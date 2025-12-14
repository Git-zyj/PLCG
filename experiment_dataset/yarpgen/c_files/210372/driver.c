#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1721386607020862719LL;
unsigned char var_3 = (unsigned char)100;
int var_4 = 824540931;
unsigned long long int var_5 = 8022854352074165438ULL;
signed char var_9 = (signed char)112;
long long int var_10 = -5647205506356002897LL;
int zero = 0;
signed char var_12 = (signed char)-48;
unsigned char var_13 = (unsigned char)136;
long long int var_14 = -1593850916718031435LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
