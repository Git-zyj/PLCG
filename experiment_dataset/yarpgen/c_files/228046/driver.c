#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32085;
unsigned long long int var_2 = 16474692043438338352ULL;
unsigned int var_3 = 3421692836U;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-75;
unsigned short var_16 = (unsigned short)31278;
void init() {
}

void checksum() {
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
