#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 233734707850679927LL;
unsigned char var_1 = (unsigned char)217;
long long int var_2 = -9206696631131707924LL;
long long int var_3 = -634277696532468353LL;
int var_6 = -1140480580;
long long int var_10 = -1090601871458196516LL;
unsigned short var_11 = (unsigned short)12464;
int zero = 0;
signed char var_13 = (signed char)-73;
unsigned char var_14 = (unsigned char)72;
unsigned char var_15 = (unsigned char)244;
void init() {
}

void checksum() {
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
