#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2572312811586934832LL;
long long int var_3 = 2972198764904418692LL;
long long int var_6 = 1802467094476547630LL;
long long int var_9 = -8849200476143050495LL;
long long int var_10 = -427379552369129180LL;
long long int var_11 = -4828230952050423447LL;
int zero = 0;
long long int var_18 = -4111064505860595428LL;
long long int var_19 = -2213309362533622650LL;
long long int var_20 = -3752565894217081339LL;
long long int var_21 = -56237987003668477LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
