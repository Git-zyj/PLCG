#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)133;
int var_4 = -1351985049;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 4253227563088571440ULL;
unsigned long long int var_11 = 7426445608719211691ULL;
int zero = 0;
unsigned long long int var_15 = 338950329341066616ULL;
int var_16 = 1658933233;
unsigned long long int var_17 = 6719466132499348808ULL;
unsigned short var_18 = (unsigned short)14183;
signed char var_19 = (signed char)-113;
int var_20 = -1408394666;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
