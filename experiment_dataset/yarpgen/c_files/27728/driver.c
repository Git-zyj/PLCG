#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)28;
signed char var_2 = (signed char)-125;
signed char var_3 = (signed char)-50;
unsigned long long int var_5 = 2569534736847677026ULL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)47;
signed char var_9 = (signed char)55;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
