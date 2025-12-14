#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 196762529;
long long int var_9 = 3129167735201035067LL;
unsigned short var_12 = (unsigned short)34459;
unsigned char var_14 = (unsigned char)78;
int zero = 0;
long long int var_20 = -4916654426796970392LL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 9308832493628075715ULL;
void init() {
}

void checksum() {
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
