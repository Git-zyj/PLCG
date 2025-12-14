#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15379838827761467865ULL;
unsigned short var_6 = (unsigned short)28105;
_Bool var_9 = (_Bool)0;
long long int var_12 = 7079073709965761169LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)64451;
unsigned short var_20 = (unsigned short)58124;
unsigned int var_21 = 2476513426U;
unsigned char var_22 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
