#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)125;
unsigned long long int var_12 = 10631702335614123030ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)48108;
unsigned int var_16 = 989621157U;
long long int var_17 = -7891262655187401641LL;
long long int var_18 = 6278277747407282526LL;
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
