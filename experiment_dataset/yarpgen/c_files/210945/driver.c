#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)37597;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)42907;
unsigned long long int var_10 = 5056544631386852400ULL;
unsigned short var_11 = (unsigned short)27921;
int zero = 0;
unsigned long long int var_12 = 17900860048139667326ULL;
unsigned long long int var_13 = 10936252482555881817ULL;
unsigned int var_14 = 2910671449U;
int var_15 = -484585063;
void init() {
}

void checksum() {
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
