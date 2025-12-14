#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7409;
short var_1 = (short)9660;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-45;
unsigned long long int var_4 = 7107553747566746719ULL;
signed char var_7 = (signed char)-60;
signed char var_8 = (signed char)-49;
unsigned long long int var_9 = 2365510957586770462ULL;
int zero = 0;
int var_10 = 1559667591;
unsigned int var_11 = 3405467748U;
unsigned long long int var_12 = 15604573415406480825ULL;
unsigned int var_13 = 2894047933U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
