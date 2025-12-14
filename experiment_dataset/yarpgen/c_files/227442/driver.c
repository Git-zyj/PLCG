#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-22230;
unsigned short var_4 = (unsigned short)16356;
unsigned short var_7 = (unsigned short)10692;
signed char var_9 = (signed char)-28;
unsigned short var_11 = (unsigned short)11211;
int zero = 0;
short var_19 = (short)-3181;
unsigned long long int var_20 = 5849620458858293496ULL;
unsigned long long int var_21 = 18011028890527323290ULL;
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
