#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20910;
unsigned char var_1 = (unsigned char)61;
unsigned long long int var_2 = 4515687751342758417ULL;
int var_3 = 1704203662;
unsigned int var_9 = 3312097153U;
int var_11 = 1517867946;
int zero = 0;
unsigned long long int var_13 = 317870473041087693ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)84;
unsigned long long int var_16 = 7543136923031832427ULL;
unsigned long long int var_17 = 8211877048765345809ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
