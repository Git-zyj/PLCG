#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15330581133586457552ULL;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)-67;
short var_14 = (short)6773;
short var_15 = (short)-12843;
int zero = 0;
unsigned short var_18 = (unsigned short)2835;
unsigned int var_19 = 4076339456U;
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
