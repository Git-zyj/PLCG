#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)159;
unsigned short var_1 = (unsigned short)52973;
int var_2 = 1815402029;
long long int var_3 = 7589194242967941897LL;
unsigned char var_4 = (unsigned char)18;
unsigned int var_10 = 2268399913U;
long long int var_11 = 5744729525602277434LL;
long long int var_13 = -6842261303078876516LL;
unsigned long long int var_17 = 8603850659342620447ULL;
int zero = 0;
int var_19 = -371059787;
int var_20 = -845670986;
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
