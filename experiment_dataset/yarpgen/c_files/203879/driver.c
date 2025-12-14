#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10039711682889373501ULL;
signed char var_3 = (signed char)-52;
unsigned char var_7 = (unsigned char)16;
unsigned int var_11 = 3552341199U;
unsigned short var_14 = (unsigned short)13714;
unsigned long long int var_15 = 12832524586737271067ULL;
unsigned char var_17 = (unsigned char)167;
int zero = 0;
int var_19 = 885894870;
int var_20 = 293743229;
void init() {
}

void checksum() {
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
