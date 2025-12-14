#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-27;
signed char var_1 = (signed char)-29;
short var_3 = (short)1839;
unsigned short var_5 = (unsigned short)40549;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-44;
short var_13 = (short)29539;
int zero = 0;
signed char var_14 = (signed char)-117;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-30414;
short var_17 = (short)7036;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
