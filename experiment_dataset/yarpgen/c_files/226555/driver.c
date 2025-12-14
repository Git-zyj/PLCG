#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5980748050189547285LL;
long long int var_3 = 7854233545125438541LL;
unsigned char var_5 = (unsigned char)151;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)70;
unsigned char var_12 = (unsigned char)75;
long long int var_13 = 571887733440043276LL;
unsigned char var_14 = (unsigned char)1;
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
