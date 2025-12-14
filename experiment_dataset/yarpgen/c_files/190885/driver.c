#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)49;
long long int var_2 = -1050229333817306508LL;
unsigned char var_3 = (unsigned char)98;
short var_8 = (short)14361;
int zero = 0;
unsigned short var_20 = (unsigned short)53325;
unsigned long long int var_21 = 9785380279227319209ULL;
void init() {
}

void checksum() {
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
