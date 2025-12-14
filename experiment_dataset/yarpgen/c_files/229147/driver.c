#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)160;
unsigned char var_6 = (unsigned char)251;
unsigned short var_7 = (unsigned short)39815;
signed char var_9 = (signed char)-97;
short var_10 = (short)27621;
int zero = 0;
short var_15 = (short)-28982;
long long int var_16 = 1469310101646027332LL;
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
