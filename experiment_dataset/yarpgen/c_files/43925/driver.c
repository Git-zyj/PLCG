#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)71;
signed char var_2 = (signed char)93;
unsigned long long int var_7 = 4908879518501007530ULL;
int zero = 0;
long long int var_12 = -3723836918600460110LL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 18280609988898581748ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
