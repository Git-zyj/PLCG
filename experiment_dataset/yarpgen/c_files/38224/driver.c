#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 743323872347494898ULL;
int var_4 = 1660823836;
int var_5 = 1308611948;
signed char var_6 = (signed char)-64;
int var_7 = -343720829;
int var_14 = 493134310;
short var_16 = (short)14228;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1765238833;
long long int var_19 = -3014636797694662070LL;
int var_20 = -865532348;
unsigned short var_21 = (unsigned short)3456;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
