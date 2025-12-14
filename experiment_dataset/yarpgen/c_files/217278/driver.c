#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-118;
unsigned short var_1 = (unsigned short)25872;
unsigned long long int var_4 = 14777675005379005580ULL;
unsigned int var_6 = 2091917759U;
long long int var_11 = -2892250918057372179LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-62;
long long int var_17 = 8234258689640259208LL;
short var_18 = (short)1197;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
