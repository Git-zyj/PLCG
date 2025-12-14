#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)104;
unsigned long long int var_2 = 11356246635893458485ULL;
unsigned short var_4 = (unsigned short)41654;
unsigned long long int var_6 = 15369466735344825253ULL;
unsigned char var_7 = (unsigned char)109;
unsigned short var_8 = (unsigned short)47962;
unsigned int var_9 = 1788522173U;
short var_11 = (short)-22151;
unsigned char var_13 = (unsigned char)54;
unsigned long long int var_16 = 2999539964236964322ULL;
int zero = 0;
unsigned int var_17 = 2175190479U;
int var_18 = 55348905;
unsigned long long int var_19 = 12878234599695733304ULL;
int var_20 = -1267199438;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
