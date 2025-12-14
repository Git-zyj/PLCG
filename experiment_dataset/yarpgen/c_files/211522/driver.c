#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1432668239;
signed char var_3 = (signed char)-74;
unsigned long long int var_4 = 1071578624816336528ULL;
int var_7 = 1624384282;
unsigned char var_8 = (unsigned char)173;
unsigned char var_9 = (unsigned char)210;
unsigned char var_10 = (unsigned char)82;
int var_11 = -265799355;
unsigned long long int var_12 = 4620536037610936055ULL;
long long int var_13 = 6927496633546786986LL;
int zero = 0;
unsigned long long int var_14 = 443364264550665917ULL;
int var_15 = 1965759830;
signed char var_16 = (signed char)-97;
void init() {
}

void checksum() {
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
