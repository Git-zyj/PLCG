#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15335590762185249064ULL;
long long int var_11 = -2328209715731853285LL;
unsigned short var_13 = (unsigned short)2439;
unsigned long long int var_14 = 2390886633239508310ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)242;
unsigned long long int var_17 = 12494031975915122599ULL;
signed char var_18 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
