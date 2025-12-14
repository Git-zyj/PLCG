#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26025;
int var_2 = -1516395770;
unsigned char var_3 = (unsigned char)144;
unsigned long long int var_4 = 8312495421169590678ULL;
unsigned int var_6 = 512083739U;
signed char var_7 = (signed char)98;
signed char var_8 = (signed char)49;
unsigned int var_9 = 2340412480U;
short var_10 = (short)-2254;
int zero = 0;
long long int var_11 = -2836402338498940506LL;
unsigned int var_12 = 3434128344U;
short var_13 = (short)-19278;
unsigned long long int var_14 = 7955852652395667048ULL;
int var_15 = 142850473;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
