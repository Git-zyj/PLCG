#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)107;
int var_2 = 1682806254;
unsigned short var_8 = (unsigned short)62550;
short var_12 = (short)26418;
unsigned long long int var_16 = 10525709100966244209ULL;
int zero = 0;
unsigned long long int var_18 = 247507238629956012ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
