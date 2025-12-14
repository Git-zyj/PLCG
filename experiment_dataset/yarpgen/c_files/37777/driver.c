#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)95;
long long int var_1 = 7740711299964522264LL;
short var_2 = (short)-1882;
long long int var_3 = 714947520514183345LL;
unsigned char var_7 = (unsigned char)180;
int var_10 = -40247736;
int var_11 = 969451996;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-57;
int var_14 = 1022865898;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
