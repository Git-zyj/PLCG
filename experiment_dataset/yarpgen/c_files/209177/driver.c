#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 355632108;
signed char var_4 = (signed char)118;
unsigned short var_6 = (unsigned short)57607;
long long int var_7 = 5842981599648826938LL;
unsigned int var_8 = 3558460121U;
unsigned char var_10 = (unsigned char)135;
int var_12 = 1021111295;
int zero = 0;
unsigned char var_13 = (unsigned char)100;
short var_14 = (short)-30794;
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
