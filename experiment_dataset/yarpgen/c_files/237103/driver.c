#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62247;
short var_1 = (short)7224;
long long int var_3 = 5986793800985104357LL;
int var_9 = -826151186;
int var_10 = 2132013573;
int zero = 0;
unsigned char var_11 = (unsigned char)170;
long long int var_12 = -7899246940897220312LL;
unsigned short var_13 = (unsigned short)22;
long long int var_14 = 8635023767102719331LL;
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
