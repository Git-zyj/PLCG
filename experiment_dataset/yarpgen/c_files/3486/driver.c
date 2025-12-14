#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)36372;
short var_6 = (short)815;
short var_7 = (short)-5083;
unsigned char var_9 = (unsigned char)96;
unsigned long long int var_13 = 14617824879130500475ULL;
int zero = 0;
short var_14 = (short)16987;
unsigned long long int var_15 = 2232659364647965839ULL;
_Bool var_16 = (_Bool)1;
int var_17 = -1205906170;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
