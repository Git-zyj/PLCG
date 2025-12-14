#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 626308879;
unsigned short var_1 = (unsigned short)42993;
unsigned long long int var_4 = 10391038014344790548ULL;
unsigned long long int var_5 = 16556966550632949027ULL;
_Bool var_7 = (_Bool)1;
int var_11 = 1886547864;
unsigned short var_12 = (unsigned short)30163;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)64656;
unsigned long long int var_16 = 4664944488174907991ULL;
unsigned short var_17 = (unsigned short)38311;
unsigned long long int var_18 = 8810362329228780820ULL;
unsigned long long int var_19 = 3274474933279408346ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
