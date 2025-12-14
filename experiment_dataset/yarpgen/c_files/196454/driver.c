#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-23;
unsigned long long int var_1 = 2435860055491431624ULL;
unsigned long long int var_2 = 5175519667763083831ULL;
signed char var_3 = (signed char)100;
long long int var_4 = -8005604703834420406LL;
unsigned int var_5 = 1769582774U;
int var_6 = 1924459178;
unsigned long long int var_7 = 11805868691323226537ULL;
unsigned char var_8 = (unsigned char)70;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)15935;
signed char var_11 = (signed char)33;
signed char var_12 = (signed char)57;
int var_13 = -614807731;
unsigned long long int var_14 = 7213661333550585136ULL;
unsigned char var_16 = (unsigned char)239;
short var_17 = (short)11308;
int zero = 0;
unsigned short var_18 = (unsigned short)31871;
int var_19 = 1174997566;
unsigned char var_20 = (unsigned char)107;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
