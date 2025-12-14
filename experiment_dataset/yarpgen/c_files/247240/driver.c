#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3898301363447843752LL;
unsigned short var_8 = (unsigned short)38842;
long long int var_13 = 7203877088382895585LL;
short var_14 = (short)20092;
int zero = 0;
unsigned char var_16 = (unsigned char)202;
unsigned short var_17 = (unsigned short)30946;
void init() {
}

void checksum() {
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
