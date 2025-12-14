#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2777234306U;
unsigned char var_4 = (unsigned char)89;
unsigned short var_5 = (unsigned short)399;
signed char var_6 = (signed char)-121;
unsigned int var_7 = 3448979682U;
signed char var_8 = (signed char)-36;
signed char var_9 = (signed char)-95;
unsigned long long int var_11 = 188209388995855674ULL;
unsigned char var_12 = (unsigned char)116;
int zero = 0;
unsigned long long int var_15 = 3339461772466813228ULL;
unsigned long long int var_16 = 3140192894072588738ULL;
void init() {
}

void checksum() {
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
