#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 685993676014201967LL;
long long int var_1 = 3703489838165612448LL;
unsigned short var_2 = (unsigned short)36018;
unsigned short var_3 = (unsigned short)40487;
long long int var_4 = -1787297648343264472LL;
unsigned short var_5 = (unsigned short)10801;
long long int var_6 = -2112506745064119601LL;
unsigned short var_7 = (unsigned short)3606;
long long int var_8 = -8290345920108273029LL;
unsigned short var_9 = (unsigned short)59257;
int zero = 0;
long long int var_10 = 2357140819053962308LL;
unsigned short var_11 = (unsigned short)1711;
long long int var_12 = 2714761486190646823LL;
unsigned short var_13 = (unsigned short)3039;
unsigned short var_14 = (unsigned short)35021;
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
