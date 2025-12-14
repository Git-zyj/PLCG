#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)215;
_Bool var_13 = (_Bool)0;
long long int var_15 = 873496807990544474LL;
int var_16 = -338323785;
unsigned long long int var_17 = 13688474573192971590ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)162;
unsigned long long int var_20 = 9585806914211448644ULL;
unsigned long long int var_21 = 16199861964071978923ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
