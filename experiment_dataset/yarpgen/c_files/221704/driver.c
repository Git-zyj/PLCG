#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 1665957998758999896ULL;
unsigned long long int var_11 = 11208997561902606392ULL;
unsigned short var_12 = (unsigned short)16629;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 13511421481438225039ULL;
void init() {
}

void checksum() {
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
