#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)170;
unsigned long long int var_6 = 17123874917217186239ULL;
signed char var_9 = (signed char)-79;
int zero = 0;
unsigned long long int var_12 = 9032459664577280501ULL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
