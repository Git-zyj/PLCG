#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
signed char var_1 = (signed char)-114;
unsigned long long int var_2 = 14191372991130371308ULL;
long long int var_6 = -2641928202626313280LL;
short var_9 = (short)26086;
unsigned long long int var_16 = 1223056672150324732ULL;
long long int var_17 = -3598999664950283506LL;
int zero = 0;
unsigned short var_18 = (unsigned short)25369;
short var_19 = (short)23813;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
