#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)5548;
signed char var_8 = (signed char)-110;
long long int var_9 = -8139607111263427802LL;
long long int var_10 = -4302941802067094526LL;
signed char var_12 = (signed char)-30;
unsigned long long int var_13 = 6600296620580062711ULL;
int zero = 0;
int var_17 = 1166900561;
long long int var_18 = -7621951859029630235LL;
unsigned int var_19 = 1196506335U;
void init() {
}

void checksum() {
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
