#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)16;
short var_8 = (short)10158;
unsigned long long int var_11 = 13618129116717032470ULL;
unsigned char var_14 = (unsigned char)246;
long long int var_15 = 8045011110074917466LL;
int zero = 0;
unsigned char var_18 = (unsigned char)108;
unsigned long long int var_19 = 17737393366762075782ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
