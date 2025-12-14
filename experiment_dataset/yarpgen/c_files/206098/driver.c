#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4111695718918085349LL;
unsigned int var_3 = 2633717548U;
short var_5 = (short)19886;
int var_6 = 909942786;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)47330;
int var_9 = -265182702;
int var_10 = -477541095;
int var_11 = -1906349783;
int var_12 = 1593062659;
long long int var_13 = -8239578111218685296LL;
unsigned char var_14 = (unsigned char)137;
unsigned char var_16 = (unsigned char)245;
unsigned long long int var_17 = 8877392469581698017ULL;
int zero = 0;
long long int var_18 = 3346837849492036251LL;
int var_19 = -1870484754;
long long int var_20 = 4281525043406818080LL;
short var_21 = (short)14162;
unsigned int var_22 = 468936480U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
