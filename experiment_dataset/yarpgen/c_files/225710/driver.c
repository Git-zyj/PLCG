#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2003742583980807363LL;
short var_2 = (short)-2189;
_Bool var_3 = (_Bool)1;
int var_4 = -157637637;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)125;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 13562484023757194494ULL;
int zero = 0;
long long int var_11 = -6394449145545778658LL;
unsigned short var_12 = (unsigned short)42423;
long long int var_13 = -2874107332858940635LL;
unsigned char var_14 = (unsigned char)100;
short var_15 = (short)30855;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
