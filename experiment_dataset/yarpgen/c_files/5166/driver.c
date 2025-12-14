#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13774705075446255046ULL;
short var_5 = (short)-19624;
long long int var_8 = 360915652426360816LL;
unsigned short var_11 = (unsigned short)55818;
unsigned char var_13 = (unsigned char)221;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_20 = (short)-25508;
short var_21 = (short)-12001;
short var_22 = (short)-16922;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
