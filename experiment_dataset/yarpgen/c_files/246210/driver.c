#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15540659483192897701ULL;
signed char var_8 = (signed char)52;
unsigned long long int var_11 = 16276713362137378157ULL;
unsigned long long int var_12 = 6700358699357744293ULL;
int zero = 0;
unsigned long long int var_20 = 15483932344958578488ULL;
unsigned long long int var_21 = 16537670080372329583ULL;
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
