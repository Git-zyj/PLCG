#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)57;
unsigned int var_3 = 2571097391U;
long long int var_4 = 1456678336738819087LL;
unsigned int var_7 = 4150593174U;
short var_9 = (short)14401;
long long int var_12 = -6684829383798703647LL;
int zero = 0;
unsigned long long int var_13 = 11341121227556553462ULL;
unsigned int var_14 = 2220856916U;
long long int var_15 = -6048587043147956899LL;
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
