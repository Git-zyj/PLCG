#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)230;
int var_8 = -717797409;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)74;
unsigned char var_14 = (unsigned char)37;
signed char var_15 = (signed char)-25;
unsigned int var_16 = 3459266949U;
signed char var_17 = (signed char)-5;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
