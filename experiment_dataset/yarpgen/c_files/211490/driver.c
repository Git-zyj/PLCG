#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12712633029218303102ULL;
unsigned long long int var_2 = 14460010924594356056ULL;
unsigned long long int var_9 = 4046542946606628605ULL;
int zero = 0;
unsigned long long int var_14 = 12063950538390508292ULL;
unsigned int var_15 = 2281274937U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
