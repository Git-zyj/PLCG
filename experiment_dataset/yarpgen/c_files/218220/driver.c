#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1925096611U;
signed char var_3 = (signed char)-19;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 2128065282U;
int var_8 = -1219288465;
int zero = 0;
int var_10 = 706233545;
unsigned short var_11 = (unsigned short)31217;
signed char var_12 = (signed char)122;
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
