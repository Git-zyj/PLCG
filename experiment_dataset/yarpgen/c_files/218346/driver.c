#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2187717848976877681ULL;
unsigned long long int var_2 = 10693874975450518857ULL;
long long int var_3 = -8572251215845201360LL;
signed char var_4 = (signed char)-48;
signed char var_5 = (signed char)-120;
unsigned int var_6 = 1364249486U;
int var_7 = 53425424;
int var_9 = -1160535817;
unsigned short var_10 = (unsigned short)18169;
unsigned short var_13 = (unsigned short)18075;
int zero = 0;
unsigned char var_16 = (unsigned char)127;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1726524348U;
signed char var_19 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
