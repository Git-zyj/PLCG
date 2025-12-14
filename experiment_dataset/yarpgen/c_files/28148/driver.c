#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -121762721;
int var_1 = 509259148;
long long int var_2 = -3737288962515996906LL;
unsigned char var_3 = (unsigned char)191;
unsigned long long int var_4 = 10504391222041961871ULL;
int var_5 = 1402263908;
unsigned long long int var_7 = 4551536530915846226ULL;
unsigned short var_9 = (unsigned short)39707;
int var_13 = 171820423;
int zero = 0;
long long int var_14 = -7876324371774116761LL;
signed char var_15 = (signed char)-93;
unsigned int var_16 = 95699228U;
long long int var_17 = -8449733142489759075LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
