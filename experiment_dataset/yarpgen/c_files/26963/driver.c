#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)7288;
int var_4 = 909259707;
long long int var_6 = -7915930996398885956LL;
unsigned long long int var_7 = 294296771743728782ULL;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)89;
long long int var_14 = 7722041862221038372LL;
int zero = 0;
unsigned short var_16 = (unsigned short)29930;
short var_17 = (short)-16016;
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
