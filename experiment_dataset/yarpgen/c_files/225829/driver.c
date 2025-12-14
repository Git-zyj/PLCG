#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9648288896129628466ULL;
long long int var_3 = -4412832585171634617LL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-12;
unsigned int var_13 = 3336482492U;
signed char var_15 = (signed char)109;
int zero = 0;
unsigned short var_16 = (unsigned short)49659;
short var_17 = (short)-13576;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
