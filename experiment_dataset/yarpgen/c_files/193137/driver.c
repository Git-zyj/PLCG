#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5580688853583198855LL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)15;
long long int var_7 = -7828549419784397595LL;
long long int var_9 = 5953229550469873315LL;
int zero = 0;
long long int var_10 = 8509954434014364740LL;
long long int var_11 = 6052540851141341243LL;
short var_12 = (short)-30714;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
