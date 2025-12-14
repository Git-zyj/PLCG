#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 4831642349086017153ULL;
unsigned char var_10 = (unsigned char)110;
int zero = 0;
signed char var_18 = (signed char)-13;
unsigned int var_19 = 1381205285U;
int var_20 = -1981039817;
int var_21 = -352688775;
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
