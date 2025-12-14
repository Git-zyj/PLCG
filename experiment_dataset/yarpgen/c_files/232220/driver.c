#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)22;
signed char var_9 = (signed char)-63;
long long int var_13 = -7066525218272592943LL;
int var_14 = -605599786;
int zero = 0;
short var_16 = (short)31871;
unsigned short var_17 = (unsigned short)5474;
unsigned short var_18 = (unsigned short)64963;
short var_19 = (short)-19234;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
