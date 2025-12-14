#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)37333;
signed char var_6 = (signed char)-4;
long long int var_9 = 404756687848825914LL;
signed char var_12 = (signed char)43;
int zero = 0;
signed char var_14 = (signed char)-28;
unsigned long long int var_15 = 8407948592746892777ULL;
long long int var_16 = 1083779893346890587LL;
long long int var_17 = 2319184469579541685LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
