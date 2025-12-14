#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14569048021696609621ULL;
int var_3 = 2072909040;
int var_4 = 1732738648;
int var_10 = -224876571;
unsigned int var_12 = 3880471828U;
unsigned char var_13 = (unsigned char)121;
unsigned long long int var_15 = 14858693021121873132ULL;
unsigned int var_17 = 401368862U;
int zero = 0;
long long int var_18 = 4292087999008679280LL;
short var_19 = (short)-5926;
int var_20 = 368898562;
unsigned char var_21 = (unsigned char)148;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
