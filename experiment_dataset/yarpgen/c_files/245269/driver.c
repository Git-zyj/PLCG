#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
long long int var_4 = -633501963132845773LL;
int var_6 = 71597270;
long long int var_9 = -6169949994345511093LL;
int var_10 = 2078364260;
signed char var_12 = (signed char)-18;
signed char var_13 = (signed char)113;
unsigned char var_15 = (unsigned char)135;
int zero = 0;
int var_16 = -1134836800;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int var_19 = 465573507;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
