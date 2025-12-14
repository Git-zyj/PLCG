#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8532431635499277743LL;
unsigned long long int var_2 = 18101880603743655195ULL;
long long int var_6 = 7184003900733484942LL;
long long int var_9 = -680075667873796541LL;
unsigned char var_16 = (unsigned char)147;
int zero = 0;
unsigned char var_17 = (unsigned char)18;
unsigned short var_18 = (unsigned short)8168;
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
