#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36405;
int var_4 = 983614026;
unsigned char var_5 = (unsigned char)166;
int var_8 = -2070704011;
signed char var_10 = (signed char)-49;
unsigned int var_11 = 3390357377U;
long long int var_15 = -2010810128973183080LL;
int zero = 0;
unsigned int var_16 = 1517254530U;
unsigned long long int var_17 = 14541734238571057753ULL;
long long int var_18 = 7066464391634145852LL;
unsigned char var_19 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
