#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16192944377701901218ULL;
short var_4 = (short)32213;
signed char var_8 = (signed char)62;
signed char var_9 = (signed char)20;
int zero = 0;
short var_13 = (short)-5087;
long long int var_14 = -2544302185474504826LL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)7203;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
