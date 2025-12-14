#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40649;
_Bool var_4 = (_Bool)0;
unsigned short var_10 = (unsigned short)40687;
_Bool var_12 = (_Bool)0;
signed char var_15 = (signed char)-28;
unsigned char var_16 = (unsigned char)144;
int zero = 0;
short var_18 = (short)-25427;
long long int var_19 = 2416014529851909430LL;
unsigned char var_20 = (unsigned char)33;
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
