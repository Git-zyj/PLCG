#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-11032;
long long int var_9 = 8559300778875328882LL;
unsigned char var_16 = (unsigned char)167;
int zero = 0;
long long int var_20 = 5425488816119026787LL;
short var_21 = (short)-28704;
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
