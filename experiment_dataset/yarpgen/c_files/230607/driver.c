#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3194451948909363764ULL;
unsigned char var_6 = (unsigned char)112;
unsigned char var_7 = (unsigned char)114;
short var_8 = (short)12522;
unsigned short var_9 = (unsigned short)18629;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)135;
int var_13 = 1011327414;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)59477;
long long int var_18 = 867734660821298603LL;
unsigned char var_19 = (unsigned char)174;
void init() {
}

void checksum() {
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
