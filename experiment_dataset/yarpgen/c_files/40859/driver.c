#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7191571172830039750LL;
short var_3 = (short)9490;
unsigned char var_6 = (unsigned char)167;
unsigned char var_10 = (unsigned char)212;
unsigned char var_11 = (unsigned char)247;
unsigned long long int var_12 = 13432563490877584645ULL;
unsigned long long int var_15 = 12576808905541796738ULL;
unsigned long long int var_16 = 10103341093349217712ULL;
signed char var_18 = (signed char)88;
int zero = 0;
unsigned short var_19 = (unsigned short)55751;
unsigned short var_20 = (unsigned short)11060;
void init() {
}

void checksum() {
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
