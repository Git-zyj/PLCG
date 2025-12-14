#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3785899566U;
int var_4 = -1139817243;
short var_5 = (short)-15763;
unsigned char var_6 = (unsigned char)30;
int zero = 0;
int var_17 = 1066709614;
_Bool var_18 = (_Bool)1;
long long int var_19 = 2802857902045802513LL;
long long int var_20 = 7633337997572370180LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
