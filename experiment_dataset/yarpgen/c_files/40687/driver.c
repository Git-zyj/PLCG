#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)53473;
signed char var_7 = (signed char)115;
signed char var_9 = (signed char)-36;
unsigned char var_11 = (unsigned char)131;
long long int var_13 = 1339249351589015745LL;
int var_15 = 1958009117;
int zero = 0;
unsigned long long int var_18 = 8075187112807059965ULL;
unsigned long long int var_19 = 448036917554013216ULL;
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
