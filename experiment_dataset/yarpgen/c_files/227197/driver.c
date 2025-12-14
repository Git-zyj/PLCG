#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -5773527205474536527LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 13066266403683012290ULL;
int zero = 0;
unsigned long long int var_12 = 7928615804049615362ULL;
_Bool var_13 = (_Bool)0;
int var_14 = -775732316;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
