#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 488889760U;
unsigned int var_1 = 3839448270U;
unsigned int var_3 = 1877156508U;
int var_4 = 1722580693;
short var_6 = (short)11382;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)24002;
unsigned int var_10 = 2891303521U;
unsigned char var_12 = (unsigned char)178;
unsigned int var_13 = 1061899038U;
long long int var_15 = -1288839079039885658LL;
int zero = 0;
int var_16 = 1968454011;
unsigned int var_17 = 3042431712U;
int var_18 = 1446743526;
unsigned int var_19 = 2632304967U;
int var_20 = 124463950;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
