#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)26;
unsigned char var_5 = (unsigned char)128;
unsigned short var_9 = (unsigned short)38041;
unsigned int var_13 = 1837049995U;
unsigned int var_15 = 1361292224U;
_Bool var_16 = (_Bool)1;
long long int var_17 = -3221985364213734785LL;
int zero = 0;
unsigned long long int var_19 = 4403787359944386036ULL;
unsigned char var_20 = (unsigned char)58;
unsigned long long int var_21 = 667124748218713753ULL;
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
