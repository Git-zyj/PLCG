#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1046629893;
long long int var_2 = 2631098990916271382LL;
unsigned char var_3 = (unsigned char)159;
unsigned long long int var_4 = 7143942207616703399ULL;
signed char var_5 = (signed char)33;
long long int var_6 = 1366695972285536875LL;
unsigned int var_7 = 2891824695U;
unsigned long long int var_9 = 4720684862033702387ULL;
short var_10 = (short)-17759;
long long int var_12 = 7606536875986289369LL;
unsigned int var_13 = 20226547U;
long long int var_14 = -901914525867735569LL;
long long int var_16 = 6351103832233870576LL;
int zero = 0;
short var_17 = (short)7265;
unsigned char var_18 = (unsigned char)29;
unsigned char var_19 = (unsigned char)116;
unsigned short var_20 = (unsigned short)5771;
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
