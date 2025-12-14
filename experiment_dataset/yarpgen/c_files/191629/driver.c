#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7700168688354363277ULL;
unsigned char var_1 = (unsigned char)57;
unsigned long long int var_2 = 10917258739646912714ULL;
unsigned short var_3 = (unsigned short)61554;
_Bool var_5 = (_Bool)1;
long long int var_7 = -2077271670556730893LL;
unsigned long long int var_8 = 12974662031981084920ULL;
unsigned char var_9 = (unsigned char)76;
signed char var_10 = (signed char)126;
short var_11 = (short)-10526;
int zero = 0;
long long int var_12 = -720140881370839166LL;
short var_13 = (short)-31382;
signed char var_14 = (signed char)32;
unsigned int var_15 = 680257498U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
