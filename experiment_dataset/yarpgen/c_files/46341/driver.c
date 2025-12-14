#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)12;
unsigned long long int var_5 = 4299090249180552779ULL;
unsigned char var_10 = (unsigned char)106;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_16 = 796678442882437154LL;
long long int var_17 = 3426204898237695169LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
