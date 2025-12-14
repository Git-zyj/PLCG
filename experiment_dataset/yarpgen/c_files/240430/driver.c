#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 921982807U;
unsigned int var_1 = 2640341612U;
unsigned long long int var_2 = 7153145086221313924ULL;
unsigned int var_3 = 3182236441U;
unsigned long long int var_4 = 13443629977100557489ULL;
unsigned char var_5 = (unsigned char)143;
int var_6 = 1177920502;
int var_7 = 37166064;
int var_9 = 1767264684;
unsigned short var_10 = (unsigned short)44902;
int zero = 0;
long long int var_11 = 1487993044994979232LL;
unsigned char var_12 = (unsigned char)116;
long long int var_13 = -5173546187779141362LL;
int var_14 = 2080042425;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
