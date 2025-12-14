#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-43;
int var_9 = -1195440473;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)182;
unsigned char var_17 = (unsigned char)97;
int zero = 0;
signed char var_18 = (signed char)100;
_Bool var_19 = (_Bool)0;
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
