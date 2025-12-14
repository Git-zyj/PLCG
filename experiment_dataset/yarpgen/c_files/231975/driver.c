#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 704943014589999721LL;
int var_1 = 427093349;
unsigned short var_5 = (unsigned short)16039;
unsigned long long int var_6 = 14232393810025145286ULL;
int var_9 = -1025801020;
int var_10 = -408220700;
unsigned short var_12 = (unsigned short)62027;
unsigned char var_14 = (unsigned char)163;
unsigned short var_16 = (unsigned short)18861;
int zero = 0;
int var_17 = 1695289780;
int var_18 = 1147827558;
unsigned short var_19 = (unsigned short)12752;
unsigned int var_20 = 1634098657U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
