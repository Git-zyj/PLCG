#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8856852064515071221LL;
long long int var_4 = -1733571192813699927LL;
unsigned char var_7 = (unsigned char)64;
unsigned long long int var_9 = 17676194659561567300ULL;
signed char var_10 = (signed char)122;
short var_11 = (short)-3147;
unsigned long long int var_13 = 11772383941053370257ULL;
unsigned int var_14 = 467703825U;
int zero = 0;
unsigned short var_15 = (unsigned short)30448;
long long int var_16 = 6509064345367334309LL;
void init() {
}

void checksum() {
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
