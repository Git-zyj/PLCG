#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 630810764098922369ULL;
short var_1 = (short)29866;
unsigned int var_2 = 3323158117U;
unsigned short var_3 = (unsigned short)10920;
unsigned char var_5 = (unsigned char)154;
unsigned char var_6 = (unsigned char)210;
unsigned int var_7 = 1839835085U;
unsigned long long int var_9 = 6432432026759838160ULL;
unsigned long long int var_10 = 10189638843280156523ULL;
long long int var_11 = -5668552519054747402LL;
int zero = 0;
unsigned char var_12 = (unsigned char)191;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
