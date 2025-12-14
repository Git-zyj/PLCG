#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)177;
unsigned long long int var_9 = 8484859869009246906ULL;
short var_11 = (short)-8664;
int zero = 0;
unsigned short var_15 = (unsigned short)18409;
long long int var_16 = 668942835342898632LL;
unsigned long long int var_17 = 8052536597109496487ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
