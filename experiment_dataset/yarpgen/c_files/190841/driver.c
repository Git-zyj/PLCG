#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39964;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)35689;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2666925609U;
unsigned short var_6 = (unsigned short)65181;
signed char var_10 = (signed char)-89;
signed char var_14 = (signed char)25;
short var_15 = (short)9788;
signed char var_17 = (signed char)-21;
int var_19 = -1737672614;
int zero = 0;
long long int var_20 = 1028253342528460851LL;
unsigned int var_21 = 1389338120U;
unsigned short var_22 = (unsigned short)6549;
int var_23 = 1798063932;
unsigned int var_24 = 3262394374U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
