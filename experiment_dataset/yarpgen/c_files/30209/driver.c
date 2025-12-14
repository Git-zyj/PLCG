#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44483;
int var_4 = -547114742;
unsigned char var_5 = (unsigned char)141;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)59090;
long long int var_13 = 8331959941742604427LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
