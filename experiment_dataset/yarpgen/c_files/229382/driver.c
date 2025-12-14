#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8670078720914084419LL;
unsigned short var_2 = (unsigned short)61830;
unsigned char var_8 = (unsigned char)65;
long long int var_9 = 5046133164396462130LL;
unsigned char var_10 = (unsigned char)201;
int zero = 0;
long long int var_12 = -2596545115903328758LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
