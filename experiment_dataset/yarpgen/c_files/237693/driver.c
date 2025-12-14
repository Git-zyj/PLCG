#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)48;
unsigned short var_3 = (unsigned short)39629;
unsigned int var_4 = 327565461U;
unsigned short var_5 = (unsigned short)15346;
unsigned int var_6 = 186130198U;
unsigned short var_7 = (unsigned short)54055;
long long int var_8 = -5867267970628102815LL;
unsigned short var_9 = (unsigned short)14019;
unsigned char var_10 = (unsigned char)182;
signed char var_11 = (signed char)74;
int zero = 0;
unsigned int var_12 = 1955901637U;
int var_13 = -667874530;
short var_14 = (short)221;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
