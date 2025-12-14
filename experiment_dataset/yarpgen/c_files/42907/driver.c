#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-115;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 3605691514U;
int var_12 = -1298766738;
short var_14 = (short)21857;
long long int var_18 = -7561836288296779619LL;
int zero = 0;
unsigned long long int var_20 = 8899749507393861231ULL;
unsigned int var_21 = 922161543U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
