#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)57;
long long int var_1 = -4819749797453560128LL;
unsigned short var_2 = (unsigned short)11261;
int var_5 = -1051417244;
unsigned long long int var_7 = 5706475257907632714ULL;
unsigned long long int var_12 = 15244330592888238040ULL;
int zero = 0;
unsigned long long int var_15 = 1145878296194694407ULL;
long long int var_16 = -3358616501255067440LL;
unsigned int var_17 = 2028648257U;
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
