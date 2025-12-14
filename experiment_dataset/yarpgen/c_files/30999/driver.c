#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4089753169U;
short var_6 = (short)9583;
unsigned int var_7 = 3490428820U;
unsigned int var_10 = 178795871U;
signed char var_11 = (signed char)-114;
unsigned long long int var_12 = 11014130082952504379ULL;
unsigned char var_14 = (unsigned char)138;
int zero = 0;
unsigned int var_17 = 2115577503U;
unsigned char var_18 = (unsigned char)184;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-24;
void init() {
}

void checksum() {
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
