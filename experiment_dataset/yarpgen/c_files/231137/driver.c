#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5219703329866522400LL;
long long int var_1 = 1895590128342133772LL;
long long int var_3 = -6450039858630849976LL;
long long int var_6 = 2933201944108988021LL;
long long int var_8 = -6932504619499255218LL;
long long int var_9 = 2766421886356577503LL;
int zero = 0;
long long int var_10 = -5426303810996714517LL;
long long int var_11 = -6891605773710139225LL;
long long int var_12 = 4534683619078961590LL;
long long int var_13 = -440404342969427910LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
