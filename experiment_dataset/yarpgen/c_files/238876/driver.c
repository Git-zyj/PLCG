#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)183;
long long int var_8 = -8939944312682118220LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 18234140305225888895ULL;
short var_12 = (short)16222;
unsigned char var_13 = (unsigned char)152;
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
