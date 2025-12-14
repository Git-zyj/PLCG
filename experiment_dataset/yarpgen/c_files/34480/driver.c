#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18144818696766263665ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)50469;
long long int var_11 = -4314801004798640394LL;
short var_17 = (short)-6780;
int zero = 0;
short var_18 = (short)6500;
signed char var_19 = (signed char)-38;
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
