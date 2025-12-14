#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3213;
unsigned short var_4 = (unsigned short)19736;
unsigned int var_5 = 2810597607U;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 16511557783429878740ULL;
signed char var_19 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
