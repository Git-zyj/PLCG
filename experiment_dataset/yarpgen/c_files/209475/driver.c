#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27813;
unsigned char var_1 = (unsigned char)84;
unsigned int var_4 = 4094693296U;
signed char var_9 = (signed char)59;
signed char var_15 = (signed char)27;
int zero = 0;
unsigned long long int var_18 = 17484453868017101892ULL;
unsigned short var_19 = (unsigned short)29902;
unsigned long long int var_20 = 13095044010573750752ULL;
unsigned int var_21 = 2078549557U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
