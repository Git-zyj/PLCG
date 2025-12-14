#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)93;
unsigned char var_3 = (unsigned char)120;
unsigned long long int var_7 = 7589973040348771622ULL;
unsigned char var_10 = (unsigned char)1;
signed char var_12 = (signed char)-103;
unsigned long long int var_14 = 5751368378955492833ULL;
int zero = 0;
int var_17 = 2134935604;
int var_18 = 1909998142;
unsigned char var_19 = (unsigned char)63;
unsigned short var_20 = (unsigned short)14125;
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
