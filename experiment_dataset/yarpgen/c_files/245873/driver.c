#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7512;
int var_3 = 607348398;
int var_4 = 1237926143;
unsigned int var_5 = 1503962826U;
int var_6 = -980296749;
long long int var_7 = -1031300438512106256LL;
int var_8 = -314508216;
int zero = 0;
unsigned short var_11 = (unsigned short)24405;
short var_12 = (short)29916;
unsigned char var_13 = (unsigned char)243;
long long int var_14 = -3647512175031722062LL;
void init() {
}

void checksum() {
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
