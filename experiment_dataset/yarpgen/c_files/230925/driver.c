#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_7 = 8947456538828720223ULL;
unsigned long long int var_9 = 9387939598946726045ULL;
signed char var_12 = (signed char)53;
int zero = 0;
unsigned long long int var_13 = 9083843910183913080ULL;
unsigned short var_14 = (unsigned short)52618;
short var_15 = (short)698;
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
