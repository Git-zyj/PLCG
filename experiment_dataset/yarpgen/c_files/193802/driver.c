#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1840260006U;
long long int var_6 = 4369649379621641286LL;
unsigned int var_9 = 1630084607U;
long long int var_10 = -4374428925930397146LL;
unsigned int var_11 = 1397454344U;
int zero = 0;
long long int var_16 = 554298767669490128LL;
long long int var_17 = -5001130276803771377LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
