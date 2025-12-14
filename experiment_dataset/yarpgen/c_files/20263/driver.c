#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)2370;
signed char var_5 = (signed char)-49;
int var_6 = 1007470372;
short var_7 = (short)12837;
long long int var_8 = 8038018559767199844LL;
unsigned char var_9 = (unsigned char)17;
unsigned int var_12 = 1670095815U;
int var_13 = 122696083;
long long int var_17 = 8151292991563667623LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 1840438301;
void init() {
}

void checksum() {
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
