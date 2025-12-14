#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10447134161317508913ULL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)39;
long long int var_8 = 8867452967103405100LL;
long long int var_9 = -1677387838834509834LL;
int zero = 0;
unsigned long long int var_10 = 2504189350170394401ULL;
long long int var_11 = 7549471282155236742LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
