#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7005391368934580637LL;
long long int var_3 = -9069647177418850873LL;
unsigned int var_4 = 4125202161U;
signed char var_5 = (signed char)-48;
unsigned short var_8 = (unsigned short)5265;
unsigned int var_10 = 2608483800U;
int var_11 = 2112409698;
int zero = 0;
unsigned long long int var_13 = 10340319920019209505ULL;
short var_14 = (short)-14045;
unsigned long long int var_15 = 618389600607030506ULL;
void init() {
}

void checksum() {
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
