#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -258602989801334798LL;
unsigned char var_2 = (unsigned char)24;
long long int var_7 = -7589025008374044986LL;
short var_8 = (short)22831;
unsigned char var_13 = (unsigned char)122;
int zero = 0;
unsigned long long int var_17 = 12731597965621936232ULL;
int var_18 = 1146052551;
short var_19 = (short)-15302;
long long int var_20 = -8725835851425450928LL;
signed char var_21 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
