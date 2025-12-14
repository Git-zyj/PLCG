#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2568334914936264397LL;
unsigned short var_8 = (unsigned short)23510;
unsigned short var_9 = (unsigned short)3959;
int var_11 = 155148526;
long long int var_13 = -5638586459513972521LL;
short var_17 = (short)9081;
unsigned char var_19 = (unsigned char)209;
int zero = 0;
unsigned short var_20 = (unsigned short)3353;
unsigned short var_21 = (unsigned short)59734;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
