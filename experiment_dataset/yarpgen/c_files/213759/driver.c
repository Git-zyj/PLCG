#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)187;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 620530013360912529ULL;
unsigned char var_9 = (unsigned char)199;
signed char var_11 = (signed char)-100;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int var_15 = -1598291785;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
