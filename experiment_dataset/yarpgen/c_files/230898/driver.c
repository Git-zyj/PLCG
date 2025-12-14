#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3837070811422860330LL;
int var_2 = 1764774358;
unsigned int var_4 = 2703209829U;
unsigned char var_5 = (unsigned char)192;
unsigned long long int var_6 = 8143802083624613746ULL;
int var_7 = 1577740555;
unsigned short var_9 = (unsigned short)29374;
int zero = 0;
unsigned long long int var_11 = 15582982399982756952ULL;
int var_12 = -2464447;
int var_13 = 2124159390;
short var_14 = (short)-29416;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
