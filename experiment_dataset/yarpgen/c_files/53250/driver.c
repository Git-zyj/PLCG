#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32281;
signed char var_3 = (signed char)-83;
_Bool var_8 = (_Bool)0;
short var_10 = (short)15886;
int zero = 0;
unsigned int var_18 = 3092223777U;
unsigned char var_19 = (unsigned char)79;
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
