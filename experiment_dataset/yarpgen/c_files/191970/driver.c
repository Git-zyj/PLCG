#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11094;
long long int var_4 = -1603096883580748024LL;
unsigned char var_5 = (unsigned char)159;
_Bool var_9 = (_Bool)1;
long long int var_10 = 230072704330330872LL;
signed char var_11 = (signed char)-76;
unsigned long long int var_14 = 9132156102916570432ULL;
unsigned short var_15 = (unsigned short)14086;
int zero = 0;
short var_16 = (short)550;
unsigned long long int var_17 = 6193639675015818620ULL;
unsigned char var_18 = (unsigned char)252;
int var_19 = 221924494;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
