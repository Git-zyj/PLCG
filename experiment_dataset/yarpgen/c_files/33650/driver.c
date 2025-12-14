#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
short var_1 = (short)23200;
_Bool var_3 = (_Bool)1;
long long int var_4 = -4550733094892442273LL;
unsigned char var_5 = (unsigned char)239;
unsigned long long int var_6 = 11488723823842660218ULL;
unsigned char var_7 = (unsigned char)15;
int var_8 = 1489968321;
unsigned char var_10 = (unsigned char)194;
long long int var_11 = 5173358215590169488LL;
unsigned char var_12 = (unsigned char)135;
unsigned short var_14 = (unsigned short)26778;
int zero = 0;
unsigned short var_15 = (unsigned short)54544;
short var_16 = (short)5925;
unsigned char var_17 = (unsigned char)33;
int var_18 = 1205485195;
short var_19 = (short)29983;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
