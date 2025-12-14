#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 602696217;
unsigned char var_8 = (unsigned char)150;
unsigned char var_11 = (unsigned char)241;
signed char var_12 = (signed char)-100;
unsigned int var_15 = 722213136U;
int var_16 = -330982892;
unsigned int var_17 = 3185314050U;
int zero = 0;
unsigned long long int var_18 = 3365004425354723003ULL;
unsigned int var_19 = 2326967383U;
unsigned int var_20 = 2544231032U;
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
