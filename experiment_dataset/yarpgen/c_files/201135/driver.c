#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 856463978;
int var_1 = -104809668;
unsigned long long int var_2 = 9963464600378544431ULL;
unsigned short var_4 = (unsigned short)52599;
long long int var_6 = 3342052168568979444LL;
unsigned short var_7 = (unsigned short)11465;
unsigned short var_8 = (unsigned short)30757;
unsigned short var_10 = (unsigned short)23085;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-10399;
long long int var_13 = 1521698122860175651LL;
short var_14 = (short)25382;
short var_15 = (short)-16787;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
