#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5554908567526385147LL;
long long int var_1 = 2200279544123786908LL;
unsigned char var_2 = (unsigned char)255;
unsigned short var_3 = (unsigned short)14569;
short var_4 = (short)-2903;
long long int var_7 = -8667561634838215701LL;
long long int var_8 = -5081486067662140719LL;
long long int var_9 = -8890706361535039081LL;
int zero = 0;
unsigned int var_10 = 1871068191U;
unsigned long long int var_11 = 13114393159880525178ULL;
int var_12 = -1148249920;
unsigned long long int var_13 = 1925147171629558397ULL;
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
