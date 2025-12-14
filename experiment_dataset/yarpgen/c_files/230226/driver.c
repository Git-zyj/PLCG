#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8500673305815578867LL;
short var_1 = (short)9376;
unsigned long long int var_4 = 2894479784222617085ULL;
long long int var_8 = 8496246340687674271LL;
short var_10 = (short)4416;
int zero = 0;
long long int var_12 = -1501863697793206162LL;
unsigned short var_13 = (unsigned short)7108;
_Bool var_14 = (_Bool)0;
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
