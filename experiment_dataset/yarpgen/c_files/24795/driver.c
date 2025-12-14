#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -87903565;
_Bool var_9 = (_Bool)1;
signed char var_13 = (signed char)-89;
short var_19 = (short)-31205;
int zero = 0;
signed char var_20 = (signed char)107;
unsigned char var_21 = (unsigned char)89;
unsigned int var_22 = 2964453594U;
void init() {
}

void checksum() {
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
