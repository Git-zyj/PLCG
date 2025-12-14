#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17967646355126704560ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 18400350364644825871ULL;
unsigned long long int var_11 = 15220313239303661399ULL;
long long int var_12 = 7323648027548115207LL;
unsigned short var_13 = (unsigned short)43249;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
