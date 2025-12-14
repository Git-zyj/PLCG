#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-33;
unsigned long long int var_6 = 12344887523403674888ULL;
unsigned char var_9 = (unsigned char)83;
signed char var_13 = (signed char)-45;
unsigned char var_16 = (unsigned char)120;
int zero = 0;
unsigned long long int var_17 = 1194553014400514672ULL;
unsigned long long int var_18 = 2611029256277239654ULL;
void init() {
}

void checksum() {
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
