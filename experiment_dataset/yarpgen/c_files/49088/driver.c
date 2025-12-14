#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2876;
unsigned short var_1 = (unsigned short)57264;
unsigned short var_2 = (unsigned short)44784;
unsigned short var_6 = (unsigned short)61252;
unsigned short var_8 = (unsigned short)50674;
unsigned int var_9 = 2208570159U;
unsigned short var_11 = (unsigned short)53624;
unsigned long long int var_12 = 8638808959491292668ULL;
unsigned short var_13 = (unsigned short)34268;
short var_14 = (short)14015;
unsigned int var_15 = 295746066U;
unsigned short var_16 = (unsigned short)5329;
unsigned int var_17 = 2947880138U;
int zero = 0;
unsigned long long int var_18 = 10055548378006724854ULL;
short var_19 = (short)-24376;
unsigned int var_20 = 1539268229U;
void init() {
}

void checksum() {
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
