#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)52780;
unsigned long long int var_7 = 624930874086698605ULL;
unsigned long long int var_10 = 12663679027750231418ULL;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)-65;
int zero = 0;
unsigned long long int var_16 = 6481889775782978392ULL;
signed char var_17 = (signed char)110;
unsigned long long int var_18 = 4556113276938994148ULL;
signed char var_19 = (signed char)0;
unsigned long long int var_20 = 3063725544866379377ULL;
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
