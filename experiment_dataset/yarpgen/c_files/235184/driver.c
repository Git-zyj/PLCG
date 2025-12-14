#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15585;
int var_5 = -620326546;
short var_6 = (short)6173;
unsigned int var_10 = 1640447314U;
signed char var_12 = (signed char)-79;
long long int var_16 = -264049142765270935LL;
int zero = 0;
unsigned int var_19 = 1641412389U;
long long int var_20 = 8407163903611708547LL;
signed char var_21 = (signed char)105;
unsigned int var_22 = 398649140U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
