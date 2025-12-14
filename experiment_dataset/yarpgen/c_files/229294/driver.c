#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
unsigned int var_4 = 3229620579U;
signed char var_7 = (signed char)121;
unsigned int var_12 = 2254544928U;
unsigned short var_13 = (unsigned short)22394;
int zero = 0;
int var_16 = -1901483245;
long long int var_17 = 8853233674265585306LL;
unsigned long long int var_18 = 1088198273349316755ULL;
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
