#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50293;
signed char var_1 = (signed char)47;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 4987055887763939681ULL;
long long int var_6 = -2416431887607713476LL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)51303;
int zero = 0;
short var_12 = (short)-22118;
long long int var_13 = 1358456558460568978LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
