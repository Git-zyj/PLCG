#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4584231592300474988ULL;
int var_8 = 1905681301;
unsigned long long int var_9 = 10168769182218416906ULL;
unsigned char var_10 = (unsigned char)233;
unsigned long long int var_11 = 725980264682917054ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)8;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)42524;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
