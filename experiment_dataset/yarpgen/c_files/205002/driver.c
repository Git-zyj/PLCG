#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -9081400707171115169LL;
unsigned int var_5 = 3450721265U;
unsigned long long int var_11 = 13666101154491559023ULL;
int zero = 0;
long long int var_12 = 5697833516637445631LL;
signed char var_13 = (signed char)-88;
unsigned char var_14 = (unsigned char)43;
long long int var_15 = -6807446121426023421LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
