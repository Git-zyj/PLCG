#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)17851;
unsigned long long int var_11 = 964382807593310158ULL;
int zero = 0;
unsigned long long int var_13 = 18020093484882054736ULL;
unsigned long long int var_14 = 15922264132477148981ULL;
unsigned long long int var_15 = 11969765951810760242ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
