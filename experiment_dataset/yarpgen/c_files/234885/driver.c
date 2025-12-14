#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
unsigned long long int var_1 = 18171436520824980867ULL;
unsigned char var_3 = (unsigned char)158;
unsigned int var_4 = 4267866300U;
long long int var_5 = 7361708430121278555LL;
unsigned long long int var_6 = 8327952365790321805ULL;
unsigned long long int var_7 = 15245282731341695976ULL;
long long int var_8 = -5951568591610492254LL;
int zero = 0;
int var_10 = 39503333;
int var_11 = 721060699;
unsigned long long int var_12 = 17775757383592520210ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
