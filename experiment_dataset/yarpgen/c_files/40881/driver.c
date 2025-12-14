#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)31;
unsigned short var_5 = (unsigned short)25227;
signed char var_7 = (signed char)28;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1514815137U;
signed char var_11 = (signed char)13;
signed char var_12 = (signed char)8;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 7063096443305515091LL;
unsigned long long int var_16 = 13129372169496205010ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
