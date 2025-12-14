#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46673;
unsigned char var_4 = (unsigned char)203;
long long int var_7 = -7687375764379077658LL;
long long int var_8 = 1458024101013076250LL;
long long int var_9 = 5068835937925610715LL;
unsigned short var_14 = (unsigned short)62540;
int zero = 0;
int var_16 = -1234334431;
long long int var_17 = 9044827417897686457LL;
void init() {
}

void checksum() {
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
