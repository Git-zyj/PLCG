#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12120;
long long int var_4 = 5449288138543412356LL;
short var_6 = (short)-29423;
unsigned int var_8 = 1932898533U;
long long int var_9 = 6380900162024857570LL;
short var_12 = (short)-27611;
unsigned long long int var_13 = 13374294080534360412ULL;
int zero = 0;
short var_14 = (short)11517;
unsigned char var_15 = (unsigned char)212;
unsigned int var_16 = 471788905U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
