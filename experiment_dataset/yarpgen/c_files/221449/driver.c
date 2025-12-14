#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 490094513704163208ULL;
unsigned int var_1 = 613809551U;
unsigned int var_3 = 189230611U;
unsigned long long int var_4 = 4853830153599037074ULL;
short var_5 = (short)29838;
long long int var_6 = 3249239382804054933LL;
int var_8 = 1107993014;
int var_9 = 2095448957;
signed char var_10 = (signed char)-17;
int var_11 = -909129270;
unsigned char var_14 = (unsigned char)189;
int var_15 = -1803424917;
int zero = 0;
signed char var_18 = (signed char)71;
unsigned char var_19 = (unsigned char)242;
signed char var_20 = (signed char)-10;
signed char var_21 = (signed char)-14;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
