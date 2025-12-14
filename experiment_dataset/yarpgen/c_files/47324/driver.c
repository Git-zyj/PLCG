#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-7033;
long long int var_6 = -1926803872448097191LL;
short var_7 = (short)30982;
short var_9 = (short)-22748;
long long int var_10 = -3627508136938382704LL;
short var_11 = (short)275;
short var_13 = (short)3450;
int zero = 0;
short var_18 = (short)31966;
short var_19 = (short)27791;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
