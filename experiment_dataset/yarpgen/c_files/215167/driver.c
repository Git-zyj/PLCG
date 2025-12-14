#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
unsigned char var_1 = (unsigned char)154;
unsigned int var_3 = 1819628456U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 14405141200078981996ULL;
unsigned int var_7 = 4128504314U;
short var_8 = (short)-29573;
int zero = 0;
short var_10 = (short)-22445;
unsigned long long int var_11 = 5339751395397899694ULL;
short var_12 = (short)-27637;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
