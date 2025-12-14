#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 927193145U;
short var_6 = (short)21427;
short var_8 = (short)-14810;
unsigned char var_9 = (unsigned char)228;
long long int var_12 = -1293054421779736325LL;
unsigned long long int var_13 = 15367166359026014415ULL;
int zero = 0;
unsigned long long int var_16 = 11687887179356349673ULL;
unsigned short var_17 = (unsigned short)33750;
short var_18 = (short)8047;
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
