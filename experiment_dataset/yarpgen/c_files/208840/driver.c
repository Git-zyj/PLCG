#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-82;
short var_3 = (short)17407;
int var_4 = 452125997;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)64;
unsigned short var_10 = (unsigned short)49006;
unsigned int var_12 = 945744202U;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 15662821885273073943ULL;
unsigned char var_18 = (unsigned char)128;
unsigned long long int var_19 = 8107096873571086909ULL;
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
