#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)0;
int var_3 = -1117860309;
signed char var_6 = (signed char)-78;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 8830193613352661073ULL;
int zero = 0;
unsigned int var_12 = 4027151448U;
signed char var_13 = (signed char)125;
signed char var_14 = (signed char)-88;
void init() {
}

void checksum() {
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
