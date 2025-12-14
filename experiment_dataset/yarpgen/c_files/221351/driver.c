#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)91;
short var_2 = (short)17077;
long long int var_3 = 3131292511903054527LL;
unsigned short var_4 = (unsigned short)42693;
unsigned long long int var_5 = 13782990628798217230ULL;
int var_8 = 1291725164;
unsigned char var_9 = (unsigned char)191;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -3156535682478697856LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
