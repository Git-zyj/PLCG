#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 638070740U;
unsigned long long int var_3 = 8400769069928925037ULL;
unsigned short var_4 = (unsigned short)36212;
signed char var_6 = (signed char)101;
unsigned char var_7 = (unsigned char)245;
unsigned long long int var_8 = 2784793139005496352ULL;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned char var_15 = (unsigned char)185;
unsigned long long int var_16 = 11120316816671689014ULL;
unsigned short var_17 = (unsigned short)54476;
unsigned int var_18 = 833754169U;
int zero = 0;
unsigned long long int var_19 = 11359600011133987508ULL;
unsigned short var_20 = (unsigned short)64288;
unsigned short var_21 = (unsigned short)23029;
void init() {
}

void checksum() {
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
