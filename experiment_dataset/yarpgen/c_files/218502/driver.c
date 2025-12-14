#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 486525483;
long long int var_4 = -6504922396705966653LL;
unsigned long long int var_6 = 5020157236926624484ULL;
unsigned int var_7 = 2048088810U;
unsigned char var_8 = (unsigned char)70;
unsigned char var_9 = (unsigned char)118;
unsigned short var_10 = (unsigned short)53209;
int var_14 = -975664927;
int var_15 = 635929064;
int var_18 = 1831350019;
int zero = 0;
long long int var_19 = -234502110982188272LL;
unsigned int var_20 = 3521627506U;
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
