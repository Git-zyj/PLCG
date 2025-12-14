#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-111;
unsigned long long int var_7 = 5967086058035579870ULL;
unsigned int var_8 = 1138429823U;
unsigned char var_11 = (unsigned char)175;
long long int var_13 = 7424645866987664516LL;
int zero = 0;
int var_14 = -1090430735;
unsigned short var_15 = (unsigned short)27633;
unsigned int var_16 = 2118866362U;
signed char var_17 = (signed char)77;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
