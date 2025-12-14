#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60126;
short var_6 = (short)1719;
unsigned char var_8 = (unsigned char)60;
long long int var_9 = -2833033339759099531LL;
unsigned short var_12 = (unsigned short)60124;
int zero = 0;
short var_19 = (short)7264;
unsigned short var_20 = (unsigned short)27868;
void init() {
}

void checksum() {
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
