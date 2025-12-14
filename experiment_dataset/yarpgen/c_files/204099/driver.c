#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2245782875939395375LL;
long long int var_1 = 6452160439236808050LL;
unsigned char var_2 = (unsigned char)176;
int var_8 = 510360802;
unsigned long long int var_9 = 12908128894700405249ULL;
unsigned short var_11 = (unsigned short)27896;
short var_12 = (short)6536;
unsigned long long int var_16 = 5235643615098722891ULL;
int zero = 0;
short var_20 = (short)19200;
unsigned short var_21 = (unsigned short)45155;
unsigned long long int var_22 = 7908255123337314056ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
