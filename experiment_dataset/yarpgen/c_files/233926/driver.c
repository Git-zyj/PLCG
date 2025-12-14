#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)15;
signed char var_1 = (signed char)52;
signed char var_4 = (signed char)-76;
unsigned long long int var_5 = 5376536558775100011ULL;
int var_7 = -74965345;
int var_12 = 837169394;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -1662405488;
void init() {
}

void checksum() {
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
