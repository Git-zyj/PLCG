#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52399;
int var_4 = 2094864061;
signed char var_9 = (signed char)109;
unsigned long long int var_11 = 8429041057632824333ULL;
unsigned int var_13 = 2606052153U;
short var_14 = (short)27077;
unsigned char var_15 = (unsigned char)207;
unsigned int var_16 = 2709923908U;
int zero = 0;
unsigned long long int var_17 = 6152539874345356734ULL;
unsigned short var_18 = (unsigned short)10246;
signed char var_19 = (signed char)68;
int var_20 = -1846551446;
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
