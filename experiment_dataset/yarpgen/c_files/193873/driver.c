#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)156;
signed char var_4 = (signed char)67;
short var_6 = (short)12278;
unsigned long long int var_7 = 913402477379104136ULL;
int var_8 = -1619869571;
unsigned short var_10 = (unsigned short)31836;
int zero = 0;
unsigned char var_15 = (unsigned char)227;
long long int var_16 = -1814494040896163344LL;
signed char var_17 = (signed char)-116;
long long int var_18 = 8556246263687301957LL;
int var_19 = 1497232864;
unsigned long long int var_20 = 10605984220935361149ULL;
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
