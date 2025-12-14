#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13835;
short var_2 = (short)2881;
long long int var_3 = 8415755636584447310LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 1374290185338397094ULL;
unsigned short var_7 = (unsigned short)19655;
signed char var_8 = (signed char)121;
int var_10 = -785839529;
int zero = 0;
int var_11 = -1176221889;
unsigned long long int var_12 = 15661456327015444865ULL;
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
