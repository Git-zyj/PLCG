#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2411795543U;
short var_1 = (short)18612;
signed char var_4 = (signed char)-106;
unsigned short var_5 = (unsigned short)35876;
unsigned char var_6 = (unsigned char)253;
signed char var_7 = (signed char)55;
long long int var_8 = -957659304366600131LL;
signed char var_9 = (signed char)107;
int var_11 = -788751512;
int var_12 = -1357421873;
int var_13 = -843445001;
unsigned long long int var_15 = 11040684126117650462ULL;
unsigned long long int var_16 = 15736332461272887689ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 600047108U;
unsigned long long int var_19 = 10377974161496058324ULL;
short var_20 = (short)30022;
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
