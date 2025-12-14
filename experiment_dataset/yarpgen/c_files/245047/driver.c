#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3668666942825112583LL;
int var_3 = 1767517987;
unsigned int var_4 = 2820552665U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 587768949U;
unsigned long long int var_10 = 17547128010509780473ULL;
int var_11 = -1520189510;
unsigned long long int var_12 = 12929843444719477987ULL;
unsigned int var_14 = 2348531657U;
int var_16 = -512424068;
int var_18 = 2051000731;
long long int var_19 = 4204862190695354422LL;
int zero = 0;
signed char var_20 = (signed char)37;
int var_21 = 80838074;
int var_22 = 1535878032;
unsigned int var_23 = 930824613U;
unsigned char var_24 = (unsigned char)200;
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
