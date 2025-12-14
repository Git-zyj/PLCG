#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1158051622;
long long int var_5 = -1994317707216963850LL;
unsigned short var_8 = (unsigned short)40951;
unsigned char var_9 = (unsigned char)29;
unsigned long long int var_10 = 18424502611385339223ULL;
unsigned long long int var_11 = 7489891719901263936ULL;
long long int var_16 = 6202694889563748405LL;
unsigned int var_18 = 817248192U;
int zero = 0;
long long int var_19 = -7372068026507594819LL;
unsigned int var_20 = 2268792240U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
