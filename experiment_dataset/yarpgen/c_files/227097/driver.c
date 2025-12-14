#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1052054622950198702LL;
long long int var_4 = -5311253609535221199LL;
long long int var_7 = 4222141956798310934LL;
short var_13 = (short)12331;
int zero = 0;
short var_15 = (short)7325;
short var_16 = (short)-4002;
signed char var_17 = (signed char)-43;
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
