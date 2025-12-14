#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)115;
signed char var_3 = (signed char)-51;
unsigned long long int var_6 = 13773315677076431915ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)91;
unsigned long long int var_11 = 3031867487776366641ULL;
signed char var_12 = (signed char)-24;
signed char var_13 = (signed char)-9;
signed char var_14 = (signed char)-78;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
