#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2222702419U;
long long int var_6 = -1784435960732231955LL;
unsigned char var_8 = (unsigned char)11;
int var_9 = -304116737;
unsigned long long int var_10 = 14649976762798044008ULL;
unsigned short var_12 = (unsigned short)17776;
long long int var_15 = -5648931127952102113LL;
int zero = 0;
unsigned short var_17 = (unsigned short)59661;
unsigned int var_18 = 95245207U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
