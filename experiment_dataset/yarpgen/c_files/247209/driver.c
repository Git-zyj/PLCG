#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7243046617457084869LL;
int var_1 = 1765576779;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)70;
unsigned long long int var_8 = 979374205257579128ULL;
unsigned long long int var_9 = 2246500920952342025ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)24893;
unsigned long long int var_14 = 10033259061811150215ULL;
unsigned long long int var_15 = 10601203145265991243ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
