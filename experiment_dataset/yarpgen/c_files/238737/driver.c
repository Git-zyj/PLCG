#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9220343936447554990LL;
short var_2 = (short)-9983;
short var_11 = (short)31352;
long long int var_12 = 6283523216074121881LL;
long long int var_14 = -1924263777792594438LL;
long long int var_16 = 506106099832917642LL;
long long int var_17 = 906085574062928007LL;
short var_18 = (short)1093;
int zero = 0;
long long int var_19 = 2236764351290404971LL;
long long int var_20 = 2258553525362446765LL;
void init() {
}

void checksum() {
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
