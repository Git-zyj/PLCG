#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)180;
unsigned int var_7 = 2531267449U;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 7002839356829942402ULL;
int zero = 0;
int var_17 = -557771949;
short var_18 = (short)-661;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
