#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-102;
unsigned long long int var_4 = 11513301320314346646ULL;
unsigned int var_11 = 2165023329U;
unsigned int var_12 = 4176704269U;
short var_13 = (short)1329;
int var_14 = -823077514;
long long int var_16 = 3008516600518114971LL;
int zero = 0;
unsigned short var_19 = (unsigned short)13238;
unsigned char var_20 = (unsigned char)117;
int var_21 = -1785811825;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
