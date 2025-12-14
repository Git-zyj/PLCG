#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4371925479454054478LL;
short var_1 = (short)-23154;
short var_2 = (short)18300;
short var_3 = (short)-19213;
long long int var_4 = -838669401792181941LL;
short var_5 = (short)-943;
long long int var_9 = 1535106512355701660LL;
int zero = 0;
short var_12 = (short)2228;
short var_13 = (short)5718;
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
