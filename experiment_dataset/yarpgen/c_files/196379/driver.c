#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2297685371U;
long long int var_5 = -7638539557259067683LL;
signed char var_7 = (signed char)-9;
int var_8 = -330347915;
short var_10 = (short)-31243;
int zero = 0;
long long int var_11 = 4224599939502258623LL;
long long int var_12 = -8995241340835661242LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
