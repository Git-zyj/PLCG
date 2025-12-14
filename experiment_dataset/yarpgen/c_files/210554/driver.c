#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1355852354;
unsigned char var_2 = (unsigned char)194;
int var_3 = -1376979518;
int var_10 = -986244890;
unsigned int var_16 = 3307901901U;
int var_17 = -654248694;
unsigned int var_18 = 936072243U;
int zero = 0;
int var_19 = 1145474219;
_Bool var_20 = (_Bool)0;
long long int var_21 = -7112251403305015356LL;
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
