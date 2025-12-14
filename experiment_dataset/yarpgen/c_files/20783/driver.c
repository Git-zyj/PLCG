#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19941;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)27;
signed char var_8 = (signed char)-44;
short var_9 = (short)1891;
unsigned long long int var_11 = 17463374016094484607ULL;
long long int var_12 = 1921077823982159026LL;
signed char var_13 = (signed char)-90;
int zero = 0;
unsigned char var_17 = (unsigned char)131;
short var_18 = (short)16444;
short var_19 = (short)-22872;
int var_20 = 595324903;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
