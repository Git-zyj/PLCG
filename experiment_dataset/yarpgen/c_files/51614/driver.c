#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_7 = 4276737601U;
unsigned short var_8 = (unsigned short)27271;
_Bool var_9 = (_Bool)1;
long long int var_11 = 969479153056051298LL;
int zero = 0;
int var_15 = -1894341343;
unsigned char var_16 = (unsigned char)161;
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
