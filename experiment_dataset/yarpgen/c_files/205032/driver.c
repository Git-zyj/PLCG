#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25552;
signed char var_2 = (signed char)-13;
_Bool var_3 = (_Bool)0;
unsigned long long int var_10 = 14289236223665932387ULL;
int zero = 0;
short var_13 = (short)565;
unsigned short var_14 = (unsigned short)14048;
void init() {
}

void checksum() {
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
