#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-3;
unsigned long long int var_6 = 5957200550113972127ULL;
unsigned char var_7 = (unsigned char)148;
signed char var_10 = (signed char)62;
long long int var_11 = 8701750960807841532LL;
signed char var_12 = (signed char)-94;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-96;
unsigned long long int var_16 = 11587547784830645751ULL;
void init() {
}

void checksum() {
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
