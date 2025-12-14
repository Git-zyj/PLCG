#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 155964538U;
signed char var_2 = (signed char)-126;
unsigned char var_5 = (unsigned char)195;
signed char var_6 = (signed char)87;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)124;
unsigned int var_10 = 4126802540U;
unsigned short var_11 = (unsigned short)53817;
long long int var_12 = -4652474288955153573LL;
unsigned char var_13 = (unsigned char)200;
int zero = 0;
short var_16 = (short)26767;
unsigned long long int var_17 = 12885654881047366006ULL;
unsigned short var_18 = (unsigned short)12898;
unsigned long long int var_19 = 5442942703119928978ULL;
int var_20 = 873508251;
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
