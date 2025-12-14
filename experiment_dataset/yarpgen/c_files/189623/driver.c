#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7533088762341210733LL;
short var_3 = (short)-16191;
unsigned short var_5 = (unsigned short)42876;
long long int var_7 = -6965204212050015563LL;
short var_9 = (short)27310;
unsigned long long int var_11 = 11347794769295184501ULL;
unsigned short var_12 = (unsigned short)16042;
unsigned long long int var_13 = 15843346943539866595ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)39739;
unsigned int var_19 = 191737968U;
unsigned char var_20 = (unsigned char)102;
signed char var_21 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
