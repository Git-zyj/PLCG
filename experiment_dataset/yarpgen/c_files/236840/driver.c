#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61863;
unsigned int var_1 = 3822744366U;
unsigned short var_2 = (unsigned short)26764;
signed char var_3 = (signed char)83;
long long int var_4 = -2258593185929635062LL;
unsigned long long int var_5 = 861352786318741819ULL;
long long int var_6 = -891354055126228344LL;
signed char var_7 = (signed char)-115;
unsigned int var_9 = 1511059382U;
unsigned int var_10 = 3808851321U;
signed char var_12 = (signed char)-77;
unsigned short var_13 = (unsigned short)13604;
int zero = 0;
unsigned int var_15 = 767897321U;
unsigned int var_16 = 1324968395U;
long long int var_17 = -5037144663543119694LL;
short var_18 = (short)3076;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
