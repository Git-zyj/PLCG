#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-8;
int var_4 = 1044266902;
int var_7 = 758809565;
short var_8 = (short)7025;
short var_10 = (short)-22426;
unsigned int var_12 = 2534377526U;
signed char var_15 = (signed char)-120;
int zero = 0;
long long int var_17 = -5835905977964436676LL;
long long int var_18 = 7614747516138991336LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
