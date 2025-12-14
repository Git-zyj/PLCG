#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4224542993883625554LL;
unsigned short var_3 = (unsigned short)33233;
short var_4 = (short)21863;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 9203778529426912273ULL;
short var_9 = (short)-23173;
long long int var_10 = -1331886092566389697LL;
unsigned char var_13 = (unsigned char)27;
signed char var_14 = (signed char)(-127 - 1);
int zero = 0;
unsigned long long int var_20 = 5007639673607178818ULL;
int var_21 = -224005007;
long long int var_22 = 5179721535458114330LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
