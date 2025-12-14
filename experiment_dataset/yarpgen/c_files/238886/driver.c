#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27831;
unsigned char var_1 = (unsigned char)142;
long long int var_2 = 6365353132001570991LL;
long long int var_3 = -1314467256564351757LL;
unsigned short var_4 = (unsigned short)42025;
unsigned int var_5 = 435581592U;
unsigned short var_9 = (unsigned short)57608;
int zero = 0;
int var_10 = 47603343;
unsigned char var_11 = (unsigned char)101;
unsigned int var_12 = 880123490U;
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
