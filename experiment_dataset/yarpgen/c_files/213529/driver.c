#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 139599943;
unsigned char var_5 = (unsigned char)172;
int var_6 = 2123117845;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 575797263;
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
