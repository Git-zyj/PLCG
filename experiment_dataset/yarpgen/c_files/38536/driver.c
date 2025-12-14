#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2783918077281520839LL;
unsigned char var_1 = (unsigned char)125;
signed char var_7 = (signed char)-66;
unsigned long long int var_11 = 5886979100186252674ULL;
long long int var_12 = 202513435704999665LL;
int var_14 = 1441899720;
int zero = 0;
long long int var_15 = -6427768032484104239LL;
int var_16 = 89638552;
signed char var_17 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
