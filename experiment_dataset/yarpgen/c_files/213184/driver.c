#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)98;
unsigned int var_8 = 221918286U;
long long int var_9 = 6701301054633883372LL;
unsigned long long int var_11 = 9119894184451878814ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 6416777960572483432ULL;
int zero = 0;
int var_17 = 1795509994;
signed char var_18 = (signed char)-2;
unsigned char var_19 = (unsigned char)56;
unsigned short var_20 = (unsigned short)39347;
unsigned int var_21 = 1234803349U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
