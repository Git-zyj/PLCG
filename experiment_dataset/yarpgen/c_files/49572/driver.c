#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4447469546331951934LL;
unsigned char var_5 = (unsigned char)124;
unsigned long long int var_6 = 12114251174964117742ULL;
short var_7 = (short)-2815;
int zero = 0;
unsigned long long int var_14 = 16095230344182239595ULL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
