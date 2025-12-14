#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35381;
unsigned int var_4 = 2758330799U;
signed char var_7 = (signed char)-35;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)32019;
unsigned long long int var_17 = 9803449439888264979ULL;
void init() {
}

void checksum() {
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
