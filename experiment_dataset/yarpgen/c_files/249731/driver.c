#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1150360110;
unsigned char var_3 = (unsigned char)232;
unsigned char var_4 = (unsigned char)83;
long long int var_8 = 8210916295442390156LL;
unsigned long long int var_9 = 12231380355917671635ULL;
int var_10 = 1517300706;
long long int var_11 = -1920478798249419570LL;
unsigned long long int var_12 = 5402494628265624757ULL;
unsigned short var_16 = (unsigned short)43933;
unsigned long long int var_17 = 13821941536681610258ULL;
unsigned short var_19 = (unsigned short)65022;
int zero = 0;
unsigned long long int var_20 = 9159220425513797368ULL;
unsigned short var_21 = (unsigned short)30150;
int var_22 = 1741044930;
int var_23 = 1825489290;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
