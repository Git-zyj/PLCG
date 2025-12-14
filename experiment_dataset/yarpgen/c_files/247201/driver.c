#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39214;
unsigned int var_3 = 1843901160U;
int var_6 = -629608487;
unsigned long long int var_9 = 5311780793159654231ULL;
unsigned int var_11 = 1741669769U;
unsigned long long int var_12 = 16193158187631969182ULL;
unsigned char var_13 = (unsigned char)226;
int var_14 = 1109196429;
short var_18 = (short)13688;
int zero = 0;
unsigned int var_19 = 627240494U;
unsigned int var_20 = 3758615557U;
unsigned int var_21 = 2843896164U;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
