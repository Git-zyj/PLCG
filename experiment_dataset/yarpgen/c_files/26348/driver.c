#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)78;
long long int var_7 = -5519298925807747161LL;
int var_11 = -1135504368;
int zero = 0;
unsigned short var_20 = (unsigned short)44135;
long long int var_21 = 5460170491104031427LL;
int var_22 = -1683828558;
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
