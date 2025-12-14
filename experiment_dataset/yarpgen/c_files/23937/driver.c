#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)180;
int var_4 = -1018801009;
unsigned long long int var_6 = 2253178565212479913ULL;
unsigned char var_10 = (unsigned char)53;
int zero = 0;
signed char var_11 = (signed char)-97;
unsigned char var_12 = (unsigned char)114;
short var_13 = (short)-21305;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
