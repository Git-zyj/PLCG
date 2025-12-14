#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5098337411587718727LL;
unsigned long long int var_6 = 17033523446431246756ULL;
unsigned short var_7 = (unsigned short)23591;
int zero = 0;
int var_16 = -1784055272;
unsigned char var_17 = (unsigned char)39;
unsigned short var_18 = (unsigned short)41276;
short var_19 = (short)-24376;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
