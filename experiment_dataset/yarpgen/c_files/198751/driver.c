#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2438460885U;
unsigned char var_3 = (unsigned char)125;
long long int var_9 = -969968601220663466LL;
int zero = 0;
unsigned char var_19 = (unsigned char)63;
unsigned char var_20 = (unsigned char)202;
void init() {
}

void checksum() {
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
