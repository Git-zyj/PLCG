#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7048323958509345639ULL;
unsigned long long int var_6 = 18075173648657926993ULL;
unsigned long long int var_7 = 12770294991660816462ULL;
int var_10 = 720288509;
int var_15 = -488619247;
unsigned long long int var_16 = 14332191071284124773ULL;
int zero = 0;
unsigned long long int var_18 = 5058057133139233321ULL;
unsigned char var_19 = (unsigned char)66;
void init() {
}

void checksum() {
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
