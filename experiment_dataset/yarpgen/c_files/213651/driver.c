#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3913895627U;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)115;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 1569665969U;
signed char var_8 = (signed char)-27;
int zero = 0;
signed char var_10 = (signed char)123;
signed char var_11 = (signed char)-72;
unsigned char var_12 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
