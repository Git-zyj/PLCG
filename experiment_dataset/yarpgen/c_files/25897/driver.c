#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 7285994103338648269ULL;
unsigned long long int var_2 = 5449724227693754175ULL;
unsigned long long int var_5 = 13373147116599483688ULL;
unsigned long long int var_6 = 12318134771748366246ULL;
unsigned long long int var_8 = 11139166249299626929ULL;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 9310374718716395391ULL;
unsigned long long int var_13 = 2639663606782852258ULL;
unsigned long long int var_14 = 4413217162252205952ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 4976254198804467621ULL;
unsigned long long int var_17 = 6874822560640819404ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
