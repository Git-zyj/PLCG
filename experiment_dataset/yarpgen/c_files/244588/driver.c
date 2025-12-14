#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)75;
unsigned char var_3 = (unsigned char)155;
unsigned long long int var_6 = 9481126689455854699ULL;
int var_7 = -1703865591;
int zero = 0;
unsigned long long int var_10 = 2741127052488385208ULL;
int var_11 = -1306281333;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
