#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 530575282;
_Bool var_4 = (_Bool)0;
int var_6 = 1850907710;
unsigned int var_8 = 3168153610U;
unsigned short var_13 = (unsigned short)24147;
int zero = 0;
unsigned short var_14 = (unsigned short)32000;
_Bool var_15 = (_Bool)1;
int var_16 = 449177630;
long long int var_17 = 3305920288380511608LL;
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
