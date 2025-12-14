#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57926;
short var_2 = (short)-3273;
int var_3 = 1638112083;
int var_4 = -357900936;
unsigned long long int var_11 = 9894769224890237224ULL;
int zero = 0;
short var_18 = (short)1811;
unsigned char var_19 = (unsigned char)12;
void init() {
}

void checksum() {
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
