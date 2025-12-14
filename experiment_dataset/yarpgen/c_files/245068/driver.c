#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8840932713328600468ULL;
unsigned char var_6 = (unsigned char)177;
short var_7 = (short)-8601;
unsigned long long int var_8 = 14462677006619309608ULL;
int zero = 0;
long long int var_10 = -2008151379276432254LL;
unsigned char var_11 = (unsigned char)63;
unsigned char var_12 = (unsigned char)43;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
