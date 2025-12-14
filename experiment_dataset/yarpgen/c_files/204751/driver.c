#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1209541671U;
unsigned int var_2 = 1387123598U;
unsigned char var_3 = (unsigned char)69;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)108;
int zero = 0;
unsigned char var_20 = (unsigned char)241;
int var_21 = 398120244;
long long int var_22 = -2007964268061696702LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
