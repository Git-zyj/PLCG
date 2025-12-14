#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3211986592U;
signed char var_2 = (signed char)-44;
unsigned long long int var_7 = 989355341389409467ULL;
short var_8 = (short)-11094;
unsigned int var_10 = 3776674964U;
_Bool var_11 = (_Bool)1;
long long int var_14 = -8070900804227412415LL;
unsigned int var_15 = 1488623695U;
int zero = 0;
short var_17 = (short)-19340;
signed char var_18 = (signed char)106;
short var_19 = (short)20923;
unsigned char var_20 = (unsigned char)15;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
