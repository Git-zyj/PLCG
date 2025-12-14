#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7852;
unsigned char var_3 = (unsigned char)248;
unsigned long long int var_4 = 15053488556270267244ULL;
long long int var_7 = 7680086716324244097LL;
unsigned char var_12 = (unsigned char)238;
int zero = 0;
long long int var_20 = 7827087668856261603LL;
unsigned short var_21 = (unsigned short)60384;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
