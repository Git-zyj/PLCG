#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -829973144;
_Bool var_1 = (_Bool)0;
long long int var_2 = 81772907714655521LL;
unsigned short var_3 = (unsigned short)57775;
short var_8 = (short)17811;
unsigned long long int var_9 = 14690591302686492079ULL;
int zero = 0;
long long int var_12 = -1146738869081604408LL;
long long int var_13 = 5730870940950463467LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
