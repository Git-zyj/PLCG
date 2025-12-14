#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -198433730;
unsigned long long int var_6 = 14673149791011497601ULL;
long long int var_7 = 1883070110518269083LL;
int zero = 0;
short var_20 = (short)23714;
unsigned char var_21 = (unsigned char)157;
unsigned char var_22 = (unsigned char)191;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
