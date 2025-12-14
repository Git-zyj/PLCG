#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8412616046907710737ULL;
signed char var_4 = (signed char)-106;
signed char var_5 = (signed char)-93;
unsigned short var_6 = (unsigned short)30907;
short var_7 = (short)-17663;
unsigned short var_8 = (unsigned short)19932;
unsigned long long int var_10 = 1323935200894997692ULL;
unsigned short var_11 = (unsigned short)16328;
unsigned short var_14 = (unsigned short)40995;
unsigned short var_15 = (unsigned short)13353;
unsigned long long int var_16 = 16205403850459485285ULL;
int zero = 0;
unsigned long long int var_17 = 8851707601310821417ULL;
unsigned long long int var_18 = 4633735403212538584ULL;
unsigned long long int var_19 = 13281873425894679231ULL;
void init() {
}

void checksum() {
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
