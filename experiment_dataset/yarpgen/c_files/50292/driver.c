#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13730076898869634141ULL;
signed char var_1 = (signed char)-63;
_Bool var_3 = (_Bool)0;
unsigned char var_7 = (unsigned char)251;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)221;
int zero = 0;
unsigned long long int var_11 = 1311156107939365371ULL;
_Bool var_12 = (_Bool)0;
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
