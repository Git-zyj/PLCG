#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)59;
long long int var_2 = -1341011442011582199LL;
long long int var_3 = 6019077302917460736LL;
long long int var_5 = -9052501874214774694LL;
unsigned int var_6 = 3089711041U;
long long int var_10 = -5509161011829315973LL;
unsigned int var_14 = 687089998U;
int zero = 0;
signed char var_15 = (signed char)19;
unsigned char var_16 = (unsigned char)157;
unsigned long long int var_17 = 1571219119414317392ULL;
unsigned char var_18 = (unsigned char)140;
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
