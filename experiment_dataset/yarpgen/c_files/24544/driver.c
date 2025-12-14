#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39470;
long long int var_1 = 8355678401795259667LL;
int var_2 = 1370398567;
signed char var_3 = (signed char)12;
long long int var_4 = 5992982769814568513LL;
short var_5 = (short)13759;
long long int var_6 = 1112177370561677694LL;
unsigned short var_7 = (unsigned short)54477;
short var_8 = (short)1130;
int var_9 = -2044697008;
int zero = 0;
unsigned int var_10 = 3116400056U;
int var_11 = 1801289700;
unsigned short var_12 = (unsigned short)64869;
unsigned short var_13 = (unsigned short)38937;
int var_14 = 1675956225;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
