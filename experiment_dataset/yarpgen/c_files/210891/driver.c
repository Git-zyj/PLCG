#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -402033284;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)73;
unsigned char var_3 = (unsigned char)81;
signed char var_8 = (signed char)-118;
int var_10 = -1116318675;
int var_11 = -211923686;
long long int var_12 = 1108549184142713765LL;
unsigned int var_15 = 1474601842U;
unsigned char var_16 = (unsigned char)76;
int zero = 0;
signed char var_17 = (signed char)3;
int var_18 = -746182491;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
