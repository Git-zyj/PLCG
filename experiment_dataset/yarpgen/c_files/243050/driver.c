#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1840177315697244416LL;
short var_2 = (short)-24829;
long long int var_3 = 7211798454321359802LL;
short var_4 = (short)-11475;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 8625170303180556981ULL;
short var_8 = (short)-17019;
signed char var_9 = (signed char)122;
long long int var_10 = -8982886426492598736LL;
int zero = 0;
short var_12 = (short)-15930;
unsigned short var_13 = (unsigned short)32722;
unsigned short var_14 = (unsigned short)62725;
long long int var_15 = -4386875864809572204LL;
unsigned short var_16 = (unsigned short)7303;
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
