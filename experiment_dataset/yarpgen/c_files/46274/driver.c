#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-12;
int var_6 = 1790590393;
long long int var_7 = -4067322300542807559LL;
int var_10 = 1537946993;
int var_11 = -782536707;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-20;
unsigned char var_14 = (unsigned char)167;
long long int var_15 = -492375176624349580LL;
void init() {
}

void checksum() {
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
