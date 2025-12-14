#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4622;
unsigned long long int var_1 = 15543771215277245336ULL;
int var_2 = -819495026;
unsigned char var_3 = (unsigned char)178;
unsigned long long int var_4 = 17003501779490638551ULL;
signed char var_5 = (signed char)-106;
short var_7 = (short)7447;
int var_8 = -810670485;
int zero = 0;
long long int var_10 = -1624796278925175348LL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
