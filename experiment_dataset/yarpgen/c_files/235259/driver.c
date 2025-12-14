#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5391387595702251987LL;
unsigned long long int var_7 = 6945080008599453885ULL;
long long int var_10 = 439998005221169129LL;
unsigned short var_13 = (unsigned short)55962;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)67;
unsigned long long int var_21 = 6516136580581331899ULL;
unsigned long long int var_22 = 11156170579271765095ULL;
int var_23 = 292912131;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
