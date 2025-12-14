#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7584;
long long int var_10 = 5161840072436757632LL;
long long int var_12 = 8346808136626709038LL;
int zero = 0;
int var_16 = 1399221446;
long long int var_17 = -4041596599059808310LL;
long long int var_18 = 6148299530662554367LL;
int var_19 = -1564324205;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
