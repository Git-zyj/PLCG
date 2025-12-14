#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9627;
unsigned int var_1 = 1546733436U;
unsigned char var_4 = (unsigned char)133;
unsigned short var_6 = (unsigned short)38060;
short var_8 = (short)-24041;
unsigned int var_9 = 1957252768U;
unsigned long long int var_12 = 17764124227573510611ULL;
short var_19 = (short)25270;
int zero = 0;
unsigned short var_20 = (unsigned short)48055;
int var_21 = -1261656373;
unsigned int var_22 = 1042649581U;
unsigned long long int var_23 = 6482927300984183865ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
