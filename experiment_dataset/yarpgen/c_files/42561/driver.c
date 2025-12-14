#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3802;
signed char var_7 = (signed char)-67;
long long int var_10 = 6625753920906158074LL;
unsigned int var_14 = 3529803875U;
unsigned short var_16 = (unsigned short)63120;
unsigned int var_17 = 1364378028U;
int zero = 0;
unsigned char var_18 = (unsigned char)24;
unsigned int var_19 = 243355371U;
unsigned long long int var_20 = 7043477064026174215ULL;
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
