#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2276654378U;
signed char var_9 = (signed char)-24;
long long int var_10 = 1621539269095969728LL;
unsigned short var_14 = (unsigned short)45573;
int zero = 0;
int var_19 = -1659775454;
signed char var_20 = (signed char)-21;
unsigned short var_21 = (unsigned short)46093;
void init() {
}

void checksum() {
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
