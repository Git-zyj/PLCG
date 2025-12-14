#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)51;
_Bool var_3 = (_Bool)0;
long long int var_4 = 6245444078817447139LL;
unsigned char var_6 = (unsigned char)69;
long long int var_10 = 2758967488992782330LL;
unsigned char var_11 = (unsigned char)253;
int zero = 0;
short var_14 = (short)-6251;
short var_15 = (short)19735;
unsigned long long int var_16 = 16463005860554805996ULL;
long long int var_17 = 4323143161218217885LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
