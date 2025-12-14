#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53269;
long long int var_1 = 6971112273746797916LL;
unsigned long long int var_3 = 279276198490524111ULL;
signed char var_4 = (signed char)80;
signed char var_7 = (signed char)114;
long long int var_10 = -2459492606728685868LL;
unsigned long long int var_11 = 3225148233578742489ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)229;
signed char var_14 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
