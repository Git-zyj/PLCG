#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2261;
unsigned short var_1 = (unsigned short)45015;
short var_2 = (short)6581;
unsigned short var_3 = (unsigned short)59458;
int var_4 = -577739588;
int var_5 = -1234535685;
unsigned long long int var_8 = 5154141333123410473ULL;
unsigned short var_9 = (unsigned short)18523;
int zero = 0;
short var_10 = (short)2183;
long long int var_11 = -2446381168716368498LL;
short var_12 = (short)26343;
unsigned long long int var_13 = 10745757783267035759ULL;
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
