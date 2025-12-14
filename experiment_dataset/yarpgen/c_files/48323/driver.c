#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)60426;
unsigned long long int var_7 = 6195165621621423492ULL;
unsigned int var_11 = 4290164087U;
unsigned short var_12 = (unsigned short)48971;
unsigned long long int var_13 = 11669417856601875508ULL;
int zero = 0;
unsigned long long int var_15 = 12767941393407830670ULL;
unsigned int var_16 = 23581249U;
long long int var_17 = -5853807787161916787LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
