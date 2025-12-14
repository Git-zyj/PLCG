#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2931817216098356661LL;
signed char var_4 = (signed char)-89;
signed char var_5 = (signed char)100;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)195;
unsigned int var_11 = 665266473U;
signed char var_13 = (signed char)-88;
unsigned short var_14 = (unsigned short)38664;
signed char var_16 = (signed char)-52;
int zero = 0;
unsigned char var_17 = (unsigned char)125;
unsigned int var_18 = 4063485574U;
signed char var_19 = (signed char)-89;
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
