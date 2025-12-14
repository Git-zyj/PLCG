#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4174103212939096248LL;
long long int var_12 = 7957935911815453042LL;
int zero = 0;
unsigned long long int var_18 = 11661208691894185673ULL;
long long int var_19 = -6348440824466034015LL;
unsigned char var_20 = (unsigned char)193;
unsigned int var_21 = 3742886722U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
