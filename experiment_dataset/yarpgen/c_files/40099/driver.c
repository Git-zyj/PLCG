#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1072050527;
long long int var_1 = 2864454284420285836LL;
short var_4 = (short)-922;
unsigned short var_5 = (unsigned short)14954;
unsigned long long int var_8 = 2003455620590644735ULL;
int zero = 0;
signed char var_10 = (signed char)61;
unsigned short var_11 = (unsigned short)12087;
long long int var_12 = -912318901690669738LL;
unsigned long long int var_13 = 9310889267590894094ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
