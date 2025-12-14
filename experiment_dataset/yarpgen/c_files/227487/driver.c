#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-77;
signed char var_5 = (signed char)-76;
unsigned int var_6 = 708022489U;
signed char var_7 = (signed char)77;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-69;
signed char var_12 = (signed char)-99;
signed char var_13 = (signed char)-26;
unsigned long long int var_14 = 14023670553636588109ULL;
void init() {
}

void checksum() {
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
