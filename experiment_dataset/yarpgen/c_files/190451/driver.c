#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)224;
long long int var_5 = -3983543700159236102LL;
int var_7 = 1341852929;
unsigned long long int var_9 = 12765805723128244712ULL;
signed char var_12 = (signed char)113;
short var_13 = (short)-28011;
signed char var_14 = (signed char)-87;
unsigned short var_16 = (unsigned short)34964;
int zero = 0;
signed char var_19 = (signed char)35;
signed char var_20 = (signed char)-122;
int var_21 = -1960872217;
unsigned short var_22 = (unsigned short)24513;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
