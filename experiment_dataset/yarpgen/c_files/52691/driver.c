#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-77;
signed char var_2 = (signed char)46;
signed char var_3 = (signed char)-37;
unsigned int var_4 = 1679755047U;
long long int var_5 = -6186521838379948728LL;
int var_6 = 1614229082;
_Bool var_7 = (_Bool)1;
unsigned int var_11 = 65464008U;
short var_12 = (short)-462;
unsigned long long int var_15 = 9272103770985688775ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)2428;
unsigned char var_17 = (unsigned char)144;
unsigned char var_18 = (unsigned char)122;
signed char var_19 = (signed char)-36;
signed char var_20 = (signed char)76;
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
