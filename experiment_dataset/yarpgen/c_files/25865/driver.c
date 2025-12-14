#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1431923214;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned int var_7 = 3611424088U;
unsigned int var_9 = 94721016U;
unsigned int var_11 = 334463841U;
unsigned int var_12 = 2213442992U;
unsigned long long int var_13 = 5832830103543032316ULL;
int var_15 = 1733580047;
int zero = 0;
int var_17 = 1944070138;
unsigned short var_18 = (unsigned short)17026;
short var_19 = (short)15817;
int var_20 = -185696554;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
