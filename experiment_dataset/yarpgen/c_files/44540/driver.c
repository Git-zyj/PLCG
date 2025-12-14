#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3757529894U;
unsigned short var_3 = (unsigned short)47356;
unsigned long long int var_4 = 8433060337203287698ULL;
unsigned int var_6 = 690841511U;
long long int var_8 = 7282035707903013869LL;
unsigned long long int var_10 = 3659020113196460336ULL;
unsigned short var_13 = (unsigned short)7609;
unsigned int var_15 = 2883877708U;
unsigned char var_18 = (unsigned char)18;
int zero = 0;
long long int var_19 = -465632056809410135LL;
unsigned char var_20 = (unsigned char)93;
void init() {
}

void checksum() {
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
