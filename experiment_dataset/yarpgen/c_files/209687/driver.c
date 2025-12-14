#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
short var_1 = (short)9417;
long long int var_2 = -1384918076606111630LL;
long long int var_5 = -8934098874493629218LL;
short var_8 = (short)13547;
int zero = 0;
unsigned char var_10 = (unsigned char)156;
unsigned short var_11 = (unsigned short)46338;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
