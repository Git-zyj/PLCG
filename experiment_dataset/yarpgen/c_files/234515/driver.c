#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2930848548250522312LL;
unsigned char var_1 = (unsigned char)170;
signed char var_2 = (signed char)-28;
unsigned short var_5 = (unsigned short)45053;
unsigned int var_6 = 50682344U;
int var_8 = -2135369256;
long long int var_9 = -8159801372865349082LL;
int zero = 0;
unsigned int var_13 = 4028591904U;
unsigned int var_14 = 3971870058U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
