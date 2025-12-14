#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
unsigned long long int var_1 = 10331578756572257553ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_9 = 1956253393U;
int zero = 0;
unsigned char var_12 = (unsigned char)194;
short var_13 = (short)16708;
unsigned long long int var_14 = 6669308245816181983ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
