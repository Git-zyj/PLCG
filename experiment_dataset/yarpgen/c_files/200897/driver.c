#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51625;
unsigned int var_3 = 219351969U;
long long int var_4 = 2219530080138280958LL;
unsigned short var_5 = (unsigned short)51468;
unsigned int var_7 = 1815274024U;
int var_9 = 757881528;
int zero = 0;
unsigned char var_10 = (unsigned char)139;
long long int var_11 = 297155655223202173LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
