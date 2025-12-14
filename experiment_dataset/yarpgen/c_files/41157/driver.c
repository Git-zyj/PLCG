#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-125;
long long int var_5 = 3854731507870034770LL;
unsigned short var_7 = (unsigned short)3296;
unsigned short var_12 = (unsigned short)60494;
long long int var_14 = -3785582182125359860LL;
long long int var_16 = 6852016247651388514LL;
int zero = 0;
signed char var_17 = (signed char)-42;
unsigned short var_18 = (unsigned short)29180;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
