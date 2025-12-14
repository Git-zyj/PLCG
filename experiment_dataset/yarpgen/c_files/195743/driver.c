#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14353312384342166669ULL;
int var_1 = -761035397;
signed char var_6 = (signed char)-66;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 3472065450458092398ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)42;
signed char var_17 = (signed char)-101;
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
