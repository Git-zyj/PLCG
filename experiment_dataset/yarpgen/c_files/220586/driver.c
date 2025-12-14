#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 124472014U;
_Bool var_2 = (_Bool)1;
long long int var_3 = 4210485339980484396LL;
int var_4 = -203896361;
signed char var_5 = (signed char)-44;
unsigned long long int var_7 = 17335941700179889434ULL;
unsigned char var_10 = (unsigned char)51;
unsigned short var_11 = (unsigned short)58077;
_Bool var_12 = (_Bool)1;
int var_13 = 686294075;
unsigned long long int var_14 = 9853387389449320599ULL;
int zero = 0;
unsigned int var_16 = 1528746357U;
signed char var_17 = (signed char)9;
short var_18 = (short)31379;
unsigned short var_19 = (unsigned short)60449;
signed char var_20 = (signed char)-115;
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
