#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 963813426;
unsigned short var_9 = (unsigned short)3450;
unsigned int var_10 = 3286579842U;
short var_17 = (short)50;
int zero = 0;
unsigned char var_18 = (unsigned char)78;
unsigned short var_19 = (unsigned short)31169;
unsigned long long int var_20 = 10818567621524044918ULL;
unsigned short var_21 = (unsigned short)3967;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
