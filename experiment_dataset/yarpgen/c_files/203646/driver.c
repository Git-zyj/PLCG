#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)7;
short var_4 = (short)-4711;
long long int var_5 = -3032427906710567208LL;
unsigned short var_7 = (unsigned short)4677;
signed char var_9 = (signed char)114;
unsigned char var_13 = (unsigned char)132;
unsigned short var_14 = (unsigned short)53661;
int zero = 0;
unsigned short var_16 = (unsigned short)44161;
long long int var_17 = -6545205042254205932LL;
_Bool var_18 = (_Bool)0;
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
