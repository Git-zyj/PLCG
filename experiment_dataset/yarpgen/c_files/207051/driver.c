#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7765445316879680646LL;
unsigned char var_2 = (unsigned char)144;
int var_3 = 416113852;
long long int var_11 = 612041345290741597LL;
int var_12 = -1832725473;
signed char var_13 = (signed char)49;
signed char var_16 = (signed char)68;
int var_17 = -1856414011;
short var_18 = (short)-22863;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)51790;
unsigned long long int var_21 = 9918453036022796583ULL;
int var_22 = 755875685;
int var_23 = 1902542906;
signed char var_24 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
