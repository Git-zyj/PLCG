#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3370932310357739983LL;
signed char var_4 = (signed char)111;
long long int var_5 = -1181346941582515224LL;
unsigned int var_12 = 1544076435U;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1672334795U;
long long int var_21 = 8870959793387386993LL;
void init() {
}

void checksum() {
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
