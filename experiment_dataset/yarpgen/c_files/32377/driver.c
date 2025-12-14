#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13803189625091187767ULL;
unsigned long long int var_4 = 13700524252723115354ULL;
unsigned long long int var_8 = 11135891306580837790ULL;
unsigned long long int var_11 = 11953988954410602779ULL;
unsigned long long int var_12 = 13131065337671493143ULL;
unsigned long long int var_17 = 124495389152345354ULL;
int zero = 0;
unsigned long long int var_18 = 8652790474438375379ULL;
unsigned long long int var_19 = 9880575759450864565ULL;
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
