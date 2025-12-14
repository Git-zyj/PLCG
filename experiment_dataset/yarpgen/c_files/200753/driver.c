#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1451420455;
unsigned char var_1 = (unsigned char)209;
unsigned long long int var_3 = 9410884217106714067ULL;
unsigned long long int var_6 = 3361836368611636086ULL;
int var_8 = 1140378281;
unsigned char var_10 = (unsigned char)215;
short var_13 = (short)25372;
int zero = 0;
unsigned long long int var_15 = 13399299617476663352ULL;
unsigned char var_16 = (unsigned char)38;
unsigned long long int var_17 = 12063773649468510686ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
