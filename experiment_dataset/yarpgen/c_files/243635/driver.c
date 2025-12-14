#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13135634980279599133ULL;
long long int var_5 = -3707263610097782186LL;
unsigned char var_6 = (unsigned char)122;
long long int var_7 = -5008904285886283109LL;
unsigned short var_11 = (unsigned short)15054;
int zero = 0;
unsigned int var_13 = 2496720289U;
unsigned long long int var_14 = 5291115301523792251ULL;
unsigned long long int var_15 = 9740190551493997288ULL;
unsigned long long int var_16 = 4210730574820234726ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
