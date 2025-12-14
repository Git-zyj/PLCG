#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1564210234067258862LL;
unsigned short var_2 = (unsigned short)9278;
unsigned int var_3 = 3826465817U;
unsigned long long int var_4 = 9929694251673150868ULL;
int var_5 = 823939311;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3771923304U;
short var_10 = (short)-6484;
long long int var_11 = 7837591773817101549LL;
int var_12 = -1216065415;
short var_14 = (short)-12190;
signed char var_17 = (signed char)-8;
int zero = 0;
signed char var_18 = (signed char)-117;
short var_19 = (short)27167;
unsigned int var_20 = 689858075U;
unsigned short var_21 = (unsigned short)8010;
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
