#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-27657;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1010443961U;
unsigned char var_10 = (unsigned char)56;
long long int var_15 = -7174049352121496871LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 2251256322629713007ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
