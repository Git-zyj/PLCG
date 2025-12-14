#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24735;
unsigned int var_1 = 1086711166U;
unsigned long long int var_4 = 5305440483460679489ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)41077;
unsigned int var_12 = 1159349154U;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
