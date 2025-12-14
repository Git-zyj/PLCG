#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
unsigned char var_2 = (unsigned char)240;
_Bool var_3 = (_Bool)1;
int var_4 = -762360010;
signed char var_7 = (signed char)111;
unsigned long long int var_8 = 11787850959046792872ULL;
unsigned long long int var_10 = 14314328102376144886ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)224;
unsigned long long int var_12 = 9759360190056476802ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
