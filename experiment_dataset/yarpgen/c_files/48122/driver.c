#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4206456475U;
short var_2 = (short)16741;
unsigned short var_8 = (unsigned short)29981;
unsigned long long int var_9 = 2895343508052080701ULL;
unsigned short var_10 = (unsigned short)39101;
int var_11 = 234958957;
unsigned short var_12 = (unsigned short)5309;
int zero = 0;
short var_14 = (short)-14736;
unsigned long long int var_15 = 3189808890034344496ULL;
unsigned long long int var_16 = 5542747159491381062ULL;
unsigned char var_17 = (unsigned char)131;
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
