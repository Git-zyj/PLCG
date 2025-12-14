#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)228;
unsigned long long int var_1 = 9808790564036736274ULL;
long long int var_5 = 2500524641991746833LL;
long long int var_6 = 7524058003449955647LL;
unsigned char var_7 = (unsigned char)92;
unsigned int var_8 = 1435531895U;
unsigned long long int var_9 = 10596099177803434323ULL;
signed char var_11 = (signed char)-41;
signed char var_12 = (signed char)-108;
unsigned short var_13 = (unsigned short)11702;
int zero = 0;
unsigned int var_14 = 2406383801U;
signed char var_15 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
