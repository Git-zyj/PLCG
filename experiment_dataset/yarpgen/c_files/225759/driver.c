#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8737460408857780945LL;
unsigned short var_4 = (unsigned short)11242;
long long int var_9 = -3588383462855355452LL;
unsigned short var_13 = (unsigned short)54330;
short var_14 = (short)9061;
int zero = 0;
int var_15 = -133713018;
int var_16 = 950754927;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
