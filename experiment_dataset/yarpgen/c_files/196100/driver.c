#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_3 = (unsigned char)181;
unsigned char var_8 = (unsigned char)90;
long long int var_9 = -3338112362120718726LL;
short var_12 = (short)11816;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_16 = -7681672406531567310LL;
short var_17 = (short)14063;
unsigned int var_18 = 2871758461U;
unsigned char var_19 = (unsigned char)59;
short var_20 = (short)-7813;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
