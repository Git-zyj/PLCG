#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39074;
_Bool var_3 = (_Bool)0;
long long int var_7 = -4684812650750710531LL;
long long int var_8 = -314235055744599644LL;
unsigned short var_11 = (unsigned short)5095;
unsigned char var_12 = (unsigned char)62;
unsigned short var_13 = (unsigned short)13878;
int zero = 0;
int var_14 = 905670974;
unsigned int var_15 = 1969706275U;
_Bool var_16 = (_Bool)0;
int var_17 = -1228785698;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
