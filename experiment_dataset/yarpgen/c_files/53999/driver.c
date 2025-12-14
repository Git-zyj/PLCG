#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-68;
unsigned char var_1 = (unsigned char)97;
unsigned short var_2 = (unsigned short)56989;
signed char var_3 = (signed char)-69;
unsigned short var_5 = (unsigned short)52943;
signed char var_6 = (signed char)-36;
unsigned long long int var_7 = 10246877806612932120ULL;
signed char var_9 = (signed char)-85;
unsigned long long int var_11 = 928395530128488899ULL;
unsigned char var_12 = (unsigned char)149;
signed char var_16 = (signed char)18;
int zero = 0;
unsigned char var_17 = (unsigned char)122;
unsigned char var_18 = (unsigned char)112;
unsigned char var_19 = (unsigned char)21;
unsigned int var_20 = 3825631717U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
