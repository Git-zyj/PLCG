#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)83;
long long int var_5 = 2462179592695989331LL;
unsigned long long int var_6 = 11227719180648016525ULL;
long long int var_11 = -3542909846829676340LL;
int var_13 = 866927001;
signed char var_14 = (signed char)60;
short var_16 = (short)-14543;
int zero = 0;
int var_20 = 1112457019;
short var_21 = (short)27368;
long long int var_22 = 7207743027157937271LL;
unsigned char var_23 = (unsigned char)199;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
