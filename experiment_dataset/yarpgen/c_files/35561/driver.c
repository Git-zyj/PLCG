#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1135695102;
signed char var_1 = (signed char)-29;
unsigned short var_2 = (unsigned short)48952;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
long long int var_5 = 5095664449481117537LL;
int var_6 = -1560295696;
signed char var_7 = (signed char)44;
unsigned char var_8 = (unsigned char)253;
unsigned long long int var_9 = 10135295266430034730ULL;
int var_10 = -2019499157;
unsigned long long int var_11 = 14920754248693902014ULL;
signed char var_12 = (signed char)-55;
int var_13 = 1787246828;
unsigned long long int var_14 = 9413199924867193535ULL;
unsigned int var_15 = 1345182387U;
unsigned short var_16 = (unsigned short)3917;
unsigned long long int var_17 = 12420386126467601377ULL;
int var_18 = 684413577;
int zero = 0;
unsigned int var_19 = 2161394387U;
long long int var_20 = -5936234895560617417LL;
signed char var_21 = (signed char)103;
unsigned char var_22 = (unsigned char)212;
void init() {
}

void checksum() {
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
