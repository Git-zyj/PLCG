#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1703618687;
signed char var_3 = (signed char)-85;
unsigned int var_8 = 3341863388U;
int zero = 0;
unsigned int var_19 = 2517661108U;
unsigned long long int var_20 = 13277308596656533610ULL;
long long int var_21 = -3872162958924648887LL;
void init() {
}

void checksum() {
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
