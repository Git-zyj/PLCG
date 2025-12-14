#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2166512394U;
unsigned char var_2 = (unsigned char)82;
int var_4 = -1516020896;
signed char var_6 = (signed char)103;
signed char var_7 = (signed char)-14;
unsigned short var_8 = (unsigned short)44888;
long long int var_11 = 6326937885589180964LL;
unsigned char var_13 = (unsigned char)59;
int zero = 0;
long long int var_15 = 1741605663166179088LL;
unsigned long long int var_16 = 8067892445639482890ULL;
unsigned char var_17 = (unsigned char)84;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
