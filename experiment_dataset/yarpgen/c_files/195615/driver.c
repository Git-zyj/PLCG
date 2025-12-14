#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15708;
_Bool var_3 = (_Bool)0;
short var_8 = (short)-14041;
unsigned char var_9 = (unsigned char)21;
int var_10 = 2024509405;
unsigned long long int var_11 = 8457522201876002461ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)191;
int var_18 = 1856212501;
long long int var_19 = -3050090978577178103LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
