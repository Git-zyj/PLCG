#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9278749076234520171ULL;
int var_2 = -72367620;
unsigned char var_3 = (unsigned char)232;
short var_7 = (short)31781;
unsigned long long int var_8 = 13250882048917712667ULL;
unsigned short var_9 = (unsigned short)1856;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = -1780064708;
short var_14 = (short)27756;
signed char var_15 = (signed char)21;
unsigned int var_16 = 2088279068U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
