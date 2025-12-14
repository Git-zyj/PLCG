#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2400128629U;
unsigned int var_2 = 3508894244U;
unsigned long long int var_3 = 13600796897683395394ULL;
unsigned int var_4 = 2249096746U;
unsigned char var_5 = (unsigned char)107;
long long int var_6 = 8670889625950380949LL;
unsigned char var_7 = (unsigned char)111;
unsigned long long int var_8 = 6880718932135915275ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = -1864507107;
unsigned char var_11 = (unsigned char)108;
unsigned short var_12 = (unsigned short)17938;
unsigned long long int var_13 = 6291646963918210792ULL;
unsigned int var_14 = 695960590U;
unsigned long long int var_15 = 762496535320823837ULL;
unsigned long long int var_16 = 14260533678123298540ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
