#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1181980228;
long long int var_2 = 2898664747423849089LL;
short var_6 = (short)19335;
long long int var_9 = 7913061035443170774LL;
unsigned char var_11 = (unsigned char)127;
int zero = 0;
int var_13 = 439000231;
int var_14 = -2013569675;
short var_15 = (short)-20616;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
