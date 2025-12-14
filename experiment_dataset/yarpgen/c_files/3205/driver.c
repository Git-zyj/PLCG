#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)122;
signed char var_1 = (signed char)-47;
unsigned int var_2 = 1976425152U;
signed char var_3 = (signed char)-19;
signed char var_4 = (signed char)1;
signed char var_5 = (signed char)-16;
short var_6 = (short)26242;
short var_8 = (short)11299;
short var_9 = (short)-1763;
int zero = 0;
short var_12 = (short)-27659;
short var_13 = (short)22275;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-2375;
short var_16 = (short)15429;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
