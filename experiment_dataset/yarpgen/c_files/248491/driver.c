#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3770002599127699694ULL;
unsigned long long int var_2 = 10409903304323696146ULL;
short var_3 = (short)28342;
short var_6 = (short)-2620;
short var_11 = (short)20111;
int zero = 0;
long long int var_13 = -1446481035882780380LL;
unsigned long long int var_14 = 88728598468395656ULL;
long long int var_15 = 967566272869940285LL;
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
