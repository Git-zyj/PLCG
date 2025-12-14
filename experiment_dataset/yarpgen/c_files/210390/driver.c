#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9122;
unsigned short var_1 = (unsigned short)32482;
unsigned short var_2 = (unsigned short)19559;
signed char var_4 = (signed char)-58;
long long int var_11 = -802936075220700729LL;
int zero = 0;
unsigned char var_18 = (unsigned char)213;
unsigned int var_19 = 1015069643U;
unsigned short var_20 = (unsigned short)63659;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
