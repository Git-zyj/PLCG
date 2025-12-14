#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 380429381663682015ULL;
signed char var_2 = (signed char)-2;
long long int var_3 = -3715658863355633931LL;
unsigned int var_4 = 1947100631U;
long long int var_5 = 2252123054775267640LL;
unsigned char var_6 = (unsigned char)115;
unsigned char var_9 = (unsigned char)50;
unsigned char var_10 = (unsigned char)249;
int zero = 0;
long long int var_12 = 6952736271333790424LL;
long long int var_13 = 1099022445432865749LL;
_Bool var_14 = (_Bool)1;
int var_15 = 1029560642;
unsigned long long int var_16 = 16113490086666947258ULL;
void init() {
}

void checksum() {
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
