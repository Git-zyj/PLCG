#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)151;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)27;
int var_11 = -1105856272;
short var_12 = (short)5172;
int zero = 0;
int var_16 = 218062497;
int var_17 = -1783731229;
int var_18 = -677608108;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
