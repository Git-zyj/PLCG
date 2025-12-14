#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)121;
long long int var_8 = 8365087092981927053LL;
unsigned long long int var_9 = 3225615910020738578ULL;
long long int var_14 = -1884796504732278139LL;
int zero = 0;
signed char var_19 = (signed char)111;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
