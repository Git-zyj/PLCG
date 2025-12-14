#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1611457679668166882ULL;
unsigned short var_3 = (unsigned short)19551;
int var_4 = 1482493740;
long long int var_5 = 1917709261866427500LL;
unsigned short var_6 = (unsigned short)29598;
int var_9 = -1407912752;
unsigned long long int var_10 = 10601363241531410080ULL;
int var_13 = 110527201;
unsigned char var_14 = (unsigned char)235;
unsigned char var_15 = (unsigned char)35;
int zero = 0;
short var_18 = (short)25738;
signed char var_19 = (signed char)-6;
long long int var_20 = -2180314026134452066LL;
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
