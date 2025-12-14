#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20765;
signed char var_4 = (signed char)-27;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 16416692280227050037ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)52423;
short var_13 = (short)-11642;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
