#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 669142729262111193ULL;
unsigned char var_1 = (unsigned char)203;
unsigned int var_2 = 3387302143U;
signed char var_3 = (signed char)-108;
unsigned char var_4 = (unsigned char)199;
signed char var_9 = (signed char)-14;
unsigned int var_10 = 3786157472U;
unsigned char var_12 = (unsigned char)85;
short var_13 = (short)30619;
int var_14 = -1115313906;
int zero = 0;
signed char var_17 = (signed char)4;
unsigned long long int var_18 = 13119992564194208943ULL;
long long int var_19 = -3155342265407172969LL;
int var_20 = 865770060;
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
