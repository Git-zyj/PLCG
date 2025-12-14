#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)41423;
signed char var_8 = (signed char)123;
int var_11 = -1849794340;
signed char var_13 = (signed char)-80;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_17 = (short)-25634;
unsigned long long int var_18 = 240393805027548177ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
