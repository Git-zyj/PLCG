#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)34;
int var_2 = 2050162671;
int var_7 = -185133105;
signed char var_12 = (signed char)22;
unsigned long long int var_13 = 5810041886560928995ULL;
long long int var_18 = 2994346073850974694LL;
int zero = 0;
long long int var_19 = -797738539273831882LL;
long long int var_20 = 8999348694679035407LL;
void init() {
}

void checksum() {
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
