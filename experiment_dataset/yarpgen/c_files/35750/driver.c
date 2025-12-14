#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10152121054880690950ULL;
unsigned long long int var_5 = 4243666066778930097ULL;
unsigned long long int var_8 = 6071051034164788457ULL;
unsigned short var_9 = (unsigned short)253;
unsigned long long int var_11 = 3583818044521401729ULL;
unsigned long long int var_13 = 2576828670974712712ULL;
unsigned short var_16 = (unsigned short)22610;
long long int var_17 = -7066278140216742913LL;
int zero = 0;
unsigned int var_18 = 1762710424U;
unsigned char var_19 = (unsigned char)49;
short var_20 = (short)10034;
void init() {
}

void checksum() {
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
