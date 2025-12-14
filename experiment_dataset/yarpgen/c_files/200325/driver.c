#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1009469574;
int var_2 = -514905807;
unsigned char var_4 = (unsigned char)130;
int var_5 = -1960202294;
unsigned short var_6 = (unsigned short)27549;
int var_7 = -1429596659;
short var_8 = (short)-11097;
long long int var_9 = 559392194504696073LL;
unsigned short var_10 = (unsigned short)52964;
int zero = 0;
int var_11 = 1596313479;
unsigned char var_12 = (unsigned char)115;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
