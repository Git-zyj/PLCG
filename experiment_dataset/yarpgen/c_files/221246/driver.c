#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)162;
unsigned int var_2 = 2550414135U;
_Bool var_7 = (_Bool)1;
long long int var_11 = 8621679012227850251LL;
unsigned int var_13 = 255186409U;
unsigned long long int var_17 = 5004763098398800270ULL;
int zero = 0;
long long int var_18 = -6730734035643697198LL;
int var_19 = 589838165;
unsigned int var_20 = 4089679439U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
