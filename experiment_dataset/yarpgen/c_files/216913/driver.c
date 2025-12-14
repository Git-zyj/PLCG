#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 299826846;
_Bool var_2 = (_Bool)0;
long long int var_3 = -8093785555684579636LL;
unsigned int var_4 = 2542420551U;
signed char var_9 = (signed char)123;
int var_12 = -710936618;
signed char var_13 = (signed char)112;
int var_16 = 1827933467;
unsigned long long int var_17 = 1863577866859170094ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)48615;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
