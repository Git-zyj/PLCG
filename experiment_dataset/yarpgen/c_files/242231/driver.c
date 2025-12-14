#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29050;
unsigned long long int var_1 = 3190021391911069827ULL;
unsigned short var_2 = (unsigned short)9090;
short var_3 = (short)-30216;
unsigned int var_4 = 3621741098U;
long long int var_11 = 2875340647781957650LL;
int zero = 0;
unsigned short var_12 = (unsigned short)22585;
unsigned int var_13 = 1927122704U;
unsigned char var_14 = (unsigned char)156;
unsigned long long int var_15 = 9340321449039955679ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
